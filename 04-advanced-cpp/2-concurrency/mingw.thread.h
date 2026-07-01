/**
* @file mingw.thread.h
* @brief Standalone MinGW Win32 temporary implementation of std::thread
*/

#ifndef MINGW_THREAD_H
#define MINGW_THREAD_H

#include <windows.h>
#include <functional>
#include <memory>
#include <chrono>
#include <system_error>
#include <process.h>

namespace std {
class thread {
public:
    class id {
        DWORD mId;
        friend class thread;
    public:
        id() noexcept : mId(0) {}
        id(DWORD aId) noexcept : mId(aId) {}
        bool operator==(id aRHS) const noexcept { return mId == aRHS.mId; }
        bool operator!=(id aRHS) const noexcept { return mId != aRHS.mId; }
        friend std::ostream& operator<<(std::ostream& aOS, id aId) {
            return aOS << aId.mId;
        }
    };

private:
    HANDLE mHandle;
    id mId;

    template <class F>
    static unsigned __stdcall wrapper(void* aArgs) {
        std::unique_ptr<F> p(static_cast<F*>(aArgs));
        (*p)();
        return 0;
    }

public:
    thread() noexcept : mHandle(nullptr), mId() {}

    template <class F, class... Args>
    explicit thread(F&& aCc, Args&&... aArgs) {
        using TargetBuf = decltype(std::bind(std::declval<F>(), std::declval<Args>()...));
        std::unique_ptr<TargetBuf> p(new TargetBuf(std::bind(std::forward<F>(aCc), std::forward<Args>(aArgs)...)));
        
        unsigned threadId;
        mHandle = (HANDLE)_beginthreadex(nullptr, 0, &wrapper<TargetBuf>, p.get(), 0, &threadId);
        
        if (mHandle == nullptr) {
            throw std::system_error(GetLastError(), std::generic_category(), "Failed to create thread");
        }
        p.release();
        mId = id(threadId);
    }

    ~thread() {
        if (joinable()) std::terminate();
    }

    thread(const thread&) = delete;
    thread& operator=(const thread&) = delete;

    thread(thread&& aOther) noexcept : mHandle(aOther.mHandle), mId(aOther.mId) {
        aOther.mHandle = nullptr;
        aOther.mId = id();
    }

    thread& operator=(thread&& aOther) noexcept {
        if (joinable()) std::terminate();
        mHandle = aOther.mHandle;
        mId = aOther.mId;
        aOther.mHandle = nullptr;
        aOther.mId = id();
        return *this;
    }

    bool joinable() const noexcept { return mHandle != nullptr; }

    void join() {
        if (!joinable()) throw std::system_error(EINVAL, std::generic_category());
        WaitForSingleObject(mHandle, INFINITE);
        CloseHandle(mHandle);
        mHandle = nullptr;
        mId = id();
    }

    void detach() {
        if (!joinable()) throw std::system_error(EINVAL, std::generic_category());
        CloseHandle(mHandle);
        mHandle = nullptr;
        mId = id();
    }

    id get_id() const noexcept { return mId; }
    HANDLE native_handle() { return mHandle; }
    static unsigned int hardware_concurrency() noexcept {
        SYSTEM_INFO sysinfo;
        GetSystemInfo(&sysinfo);
        return sysinfo.dwNumberOfProcessors;
    }
};
}
#endif // MINGW_THREAD_H
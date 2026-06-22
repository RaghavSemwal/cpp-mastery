/*⭐ Virtual Functions Recap
Declared in the base class using virtual.

Allow runtime polymorphism: the correct function is chosen based on the object type, not the pointer type.

If not virtual → base pointer calls base version (static binding).

If virtual → base pointer calls derived version (dynamic binding).

⭐ Rules for Virtual Functions (from your notes)
They cannot be static.

They are accessed using object pointers.

They can be friends of another class.

A virtual function in base class might not be used.

If defined in base, no need to redefine in derived (optional).*/
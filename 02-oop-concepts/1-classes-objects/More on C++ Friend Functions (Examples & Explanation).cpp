// #include <iostream>
// using namespace std;

// class Y;

// class X {
//     private:
//        int first_num;
//     public:
//     void setdata(int n1){
//         first_num = n1;
//     }
//     friend void add(X, Y);  // declaring friend function
// };

// class   Y {
// private:
//     int second_num;
//     public:
//     void setdata(int n2){
//         second_num = n2;
//     }
//     friend void add(X, Y);  // declaring friend function
// };
 
//   void add(X x, Y y){  // defining friend function
//     cout << "Sum = " << x.first_num + y.second_num << endl;  // accessing private members of both classes
// }

// int main(){
//   X O1;
//   O1.setdata(5);
//     Y O2;
//     O2.setdata(10);

//     add(O1, O2);  // calling friend function

// }





// swaping of two object of different classes using friend function
#include <iostream>
using namespace std;

class Y;

class X {
    private:
        int first_num;
    public:
    void setdata(int n1){
        first_num = n1;
    }
    void display(){
        cout << "First Number: " << first_num << endl;
    }
    friend void swap(X&, Y&);  // declaring friend function
};

class  Y {
    private:
        int second_num;
        public:
        void setdata(int n2){
            second_num = n2;
        }
        void display(){
            cout << "Second Number: " << second_num << endl;
        }
        friend void swap(X&, Y&);  // declaring friend function
};

void swap(X& x, Y& y){  // defining friend function
    int  temp;
     temp = x.first_num;  // accessing private members of both classes
    x.first_num = y.second_num;
    y.second_num = temp;
}

int main()
{   
    X O1;
    O1.setdata(5);
    Y O2;
    O2.setdata(10);

    cout << "Before Swapping: " << endl;
    O1.display();
    O2.display();

    swap(O1, O2);  // calling friend function

    cout << "After Swapping: " << endl;
    O1.display();
    O2.display();

    return 0;

}


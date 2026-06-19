/* Class Design
1. SimpleCalculator

Inputs: 2 numbers (via utility function).

Operations: +, -, *, /.

Output: Display results with a function.

2. ScientificCalculator

Inputs: 2 numbers (via utility function).

Operations: Any 4 scientific ones (e.g., pow, sqrt, log, sin).

Output: Display results with a function.

3. HybridCalculator

Inherits from both SimpleCalculator and ScientificCalculator. */


#include <iostream>
#include <cmath> // for scientific functions
using namespace std;

class simplecalculator{
    protected:
    double num1,num2;
    public:
    void getdata1(){
        cout<<"Enter two numbers: ";
        cin>>num1>>num2;
    }
    void display1(){ 
        char op;
        cout<<"which operation do you want to perform?"<<endl;
        cout<<"for Addition choice +"<<endl;
        cout<<"for Subtraction choice -"<<endl;
        cout<<"for Multiplication choice *"<<endl;
        cout<<"for Division choice /"<<endl;
       
        cin>>op;

        switch(op){
            case '+':
            cout<<"the sum is: "<<num1+num2<<endl;
            break;
            case '-':
            cout<<"the difference is: "<<num1-num2<<endl;
            break;
            case '*':
            cout<<"the product is: "<<num1*num2<<endl;
            break;
            case '/':
            if(num2!=0){
                cout<<"the quotient is: "<<num1/num2<<endl;
            }
            else{
                cout<<"Error: Division by zero!"<<endl;
            }
            break;
            default:
            cout<<"Invalid operator!"<<endl;
        }
    }
};

class scientificcalculator{
    protected:
    double num1,num2;
    public:
    void getdata2(){
        cout<<"Enter two numbers: ";
        cin>>num1>>num2;
    }
    void display2(){
        char op;
        cout<<"which operation do you want to perform?"<<endl;
        cout<<"for Power choice p"<<endl;
        cout<<"for Square Root choice s"<<endl;
        cout<<"for Logarithm choice l"<<endl;
        cout<<"for Sine choice i"<<endl;
       
        cin>>op;

        switch(op){
            case 'p':
            cout<<"the power is: "<<pow(num1,num2)<<endl;
            break;
            case 's':
            cout<<"the square root of num1 is: "<<sqrt(num1)<<endl;
            cout<<"the square root of num2 is: "<<sqrt(num2)<<endl;
            break;
            case 'l':
            if(num1>0 && num2>0){
                cout<<"the logarithm of num1 is: "<<log(num1)<<endl;
                cout<<"the logarithm of num2 is: "<<log(num2)<<endl;
            }
            else{
                cout<<"Error: Logarithm undefined for non-positive numbers!"<<endl;
            }
            break;
            case 'i':
            cout<<"the sine of num1 is: "<<sin(num1)<<endl;
            cout<<"the sine of num2 is: "<<sin(num2)<<endl;
            break;
            default:
            cout<<"Invalid operator!"<<endl;
        }
    }
};


class hybridcalculator: public simplecalculator, public scientificcalculator{
    // This class inherits from both simplecalculator and scientificcalculator
   public:
    char choice;
   
    void hybridcal(){ 
         cout<<"This is a Hybrid Calculator that can perform both simple and scientific calculations."<<endl;

    cout<<"You can choose to use either the simple calculator functions or the scientific calculator functions."<<endl;
    cout<<"choice 's' for simple calculator and 'c' for scientific calculator."<<endl;
     cin>>choice;
        if(choice=='s'){
        getdata1(); // from simplecalculator
        display1(); // from simplecalculator
    }
    else if(choice=='c'){
        getdata2(); // from scientificcalculator
        display2(); // from scientificcalculator
    }
    else{
        cout<<"Invalid choice!"<<endl;
    } }
    



};
int main(){
    simplecalculator sc;
    scientificcalculator sci;
    hybridcalculator hc;
    cout<<"Using Simple Calculator:"<<endl;
    sc.getdata1();
    sc.display1();

    cout<<"\nUsing Scientific Calculator:"<<endl;
    sci.getdata2();
    sci.display2();
  
    hc.hybridcal(); // This will call the hybridcal function to choose between simple and scientific calculations
    return 0;
}
#include<iostream>
using namespace std;

class Calculator{

public:
    int a;
    int b;

    int Add(int a1, int a2){
        return a1+a2;
    }

    int Substract(int a1, int a2){
        return a1-a2;
    }
    int Multiply(int a1, int a2){
        return a1*a2;
    }
    double Divide(int a1, int a2){
        return (double)a1/a2;
    }

};

int main(){

    Calculator c1;
    
    int a,b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    char op;
    cout << "Enter Operator to perform: ";
    cin >> op;

    if(op == '+'){
        cout << a << " + " << b << " = " << c1.Add(a,b);
    }
    else if(op == '-'){
        cout << a << " - " << b << " = " << c1.Substract(a,b);
    }
    else if(op == '*'){
        cout << a << " * " << b << " = " << c1.Multiply(a,b);
    }
    else if(op == '/'){
        cout << a << " / " << b << " = " << c1.Divide(a,b);
    }
    else{
        cout << "Invalid Operator!";
    }

    return 0;
}
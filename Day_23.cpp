#include<iostream>
using namespace std;
int main()
{
    //calculator using switch case

    int a;
    cout<<"Enter the value of a ";
    cin>>a;
    int b;
    cout<<"Enter the value of b ";
    cin>>b;   
    char op;
    cout<<"Enter operation you want to perform ";
    cin>>op;
    switch (op)
    {
    case '+':cout<<"Addition: "<<a+b;
        break;
    case '-':cout<<"Subtraction: "<<a-b;
        break;
    case '*':cout<<"Multiplication: "<<a*b;
        break;
    case '/':cout<<"quotient:"<<a/b;
        break;
    case '%':cout<<"remainder: "<<a%b;
        break;
    default:cout<<"Enter valid operation to perform";
        break;
    }
}

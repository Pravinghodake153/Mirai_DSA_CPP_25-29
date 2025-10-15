#include<iostream>
using namespace std;

int sum(int a , int b);   // tell sum name function exists --

int multiply(int a , int b);  //declaration
int main()
{
    cout<<multiply(3,5);
    cout<<sum(3,5);  //it will search for function with name sum  -sum' was not declared in this scope
    return 0;
}
 
int multiply(int a , int b){
    return a*b;  //defination
}
//define later but we have to declare first
int sum(int a , int b){
    return a+b;   // defination is below
}

/*
Function prototype - We must declare the function before using it.




*/
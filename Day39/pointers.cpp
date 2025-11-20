#include<iostream>
using namespace std;
int main()
{
    int x = 100;
    int* p;  // p is a pointer of type int
    p = &x;  // p points to x and it will store address of x

    cout<<x<<endl;  //value at x
    cout<<&x<<endl;  //address of x  
    cout<<p<<endl;  //address of x
    cout<<&p<<endl;  //address of p

    //Deference - value at that address
    cout<<*p<<endl;   //value at that address

}
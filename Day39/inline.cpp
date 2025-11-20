#include<iostream>
using namespace std;

inline void sum(int a , int b){
    cout<<a+b<<endl;
}

int  main()
{
    sum(3,4);
    sum(6,8);  // inline function it will function call by its code

    return 0;
}
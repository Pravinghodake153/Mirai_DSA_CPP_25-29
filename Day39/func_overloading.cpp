#include<iostream>
using namespace std;

void show(int a){
    cout<<a<<endl;
}

void show(int a , int b){
    cout<<a<<" "<<b<<endl;
}

int main()
{
    show(3);
    show(3,4);  //compile time decide which function to call

    return 0;
}
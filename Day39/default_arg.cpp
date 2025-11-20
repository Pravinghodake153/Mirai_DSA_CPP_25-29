#include<iostream>
using namespace std;

void sum(int a , int b=0){
    cout<<a+b<<endl;
}

//error
void sum2(int a=0 , int b){
    cout<<a+b<<endl;
}

int main()
{
    sum(3);
    sum(3,7);
    sum2(4);  //error defalut arguments written from right to left
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int *p = nullptr;
    cout<<p<<endl;
    cout<<*p<<endl;  //gives segmentation fault
}
#include<iostream>
using namespace std;

int main()
{
    int a[100];

    //input  - every number greater than index by 1

    for(int i = 0 ; i < 100 ; i++){
        a[i] = i + 1;
    }

    //print
    for(int i = 0 ; i < 100 ; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
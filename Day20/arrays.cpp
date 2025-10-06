#include<iostream>
using namespace std;

int main()
{
    int a[5];  // declare an array a with size 5

    a[0] = 1;
    a[1] = 2;
    a[2] = 4;
    a[3] = 6;
    a[4] = 10;

    int n = 5;

    //print array

    // cout<<a[0];
    // cout<<a[1];

    for(int i = 0 ; i < n ; i++){
        cout<<a[i]<<" ";
    }
    return 0;

}
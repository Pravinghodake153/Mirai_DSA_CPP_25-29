#include<iostream>
using namespace std;

void update(int arr[] , int n){
    for(int i = 0 ; i < n; i++){
        arr[i]= arr[i]+2;
    }
}

int main()
{
    int arr[] = { 3 , 4,5,6,7};
    int n = sizeof(arr)/sizeof(int);


    update(arr, n);

    // original array print

    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
#include<iostream>

using namespace std;

int main()
{
    int arr[] = { 2,1,5,4,6,9};
    int n = sizeof(arr)/sizeof(int);

    for(int i = 0 ; i <= n-2; i++){
        for(int j = 0 ; j <= n-2; j++){

            //pair wise check
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int i = 0 ; i <= n-1; i++){
        cout<<arr[i]<<" ";
    }
}
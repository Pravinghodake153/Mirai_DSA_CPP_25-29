#include<iostream>
using namespace std;

int main()
{
    int arr[] ={2,7,1,4,3,0,8,6};
    int n = sizeof(arr)/sizeof(int);

    for(int i = 0 ; i <= n-2; i++){
        int mini = i;
        for(int j = i+1; j <= n-1; j++){
            if(arr[j]<arr[mini]){
                mini = j;
            }
        }
        swap(arr[i], arr[mini]);

    }

    for(int i = 0 ; i <= n-1; i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}
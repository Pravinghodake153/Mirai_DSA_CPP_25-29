#include<iostream>
using namespace std;

int main()
{
    int arr[] ={2,7,1,4,3,0,8,6};
    int n = sizeof(arr)/sizeof(int);
    int j;
    
     for(int i = 1; i <= n-1; i++){
        int pick = arr[i];  //pick an element

        //place AT ITS  correct position in left part- solterd
        for( j = i-1; j >= 0 and (arr[j] > pick)  ; j--){
           arr[j+1]=arr[j];

        }
        arr[j+1]= pick;
     }

    for(int i = 0 ; i <= n-1; i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}
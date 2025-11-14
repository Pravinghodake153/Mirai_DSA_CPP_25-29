#include<iostream>
using namespace std;

int main()
{
    int arr[4]={1,-2,3,4};
    int n = 4;

    //print all subarrays
    //first index
    for(int i = 0 ; i < n ; i++){
        //second index
        for(int j = i ; j < n ; j++){
            //print from first index to second index
            for(int k = i ; k <= j ; k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    //pick first index
    for(int i = 0 ; i < n ; i++)
    {
    //second index
    for(int j = i ; j < n; j++){
        //print element from i to j
        for(int k = i ; k <= j ; k++){
            cout<<arr[k]<<" ";
        }
        cout<<endl;
    }
}
return 0;
}
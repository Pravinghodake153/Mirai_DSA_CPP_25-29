#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n-1];
    for(int i = 0 ; i < n-1; i++){
        cin>>arr[i];
    }

    //sum of n elements
    int sum = n*(n+1)/2;


    //sum of array elements
    int array_sum = 0;
    for(int i = 0 ; i < n-1 ; i++){
        array_sum = array_sum + arr[i];
    }

    int missing_no = sum - array_sum; // missing ni
    cout<<missing_no<<" ";
    return 0;
}
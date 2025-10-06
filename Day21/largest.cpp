#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int largest = INT_MIN;
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
        sum = sum + arr[i];
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
  cout<<largest<<endl;
  cout<<sum<<endl;
  return 0;

}
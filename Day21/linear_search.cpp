#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    for(int i = 0 ; i < 10 ; i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;

    int ans = -1;
    for(int i = 0 ; i < 10 ; i++){
        if(arr[i] == target){
            ans = i;
            break; // for first index
        }
    }
    cout<<ans<<endl;
}
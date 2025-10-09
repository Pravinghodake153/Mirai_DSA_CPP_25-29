#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }

    int count = 1;
    int maxi = 0;

    for(int i = 0 ; i < n-1 ; i++){
        if(arr[i] == arr[i+1]){
            count++;
        }
        else{
            if(count > maxi){
                maxi = count ;
            }
            count = 1;
        }
    }
    if(count> maxi){
        maxi = count;
    }
    cout<<maxi<<endl;
    return 0;

}
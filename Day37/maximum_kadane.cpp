#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int arr[4]={1,-2,3,4};
    int n = 4;

    int sum = 0;
    int maxi = INT_MIN;

    for(int i = 0 ; i < n ; i++){
        sum = sum + arr[i];

        if(sum > maxi){
            maxi = sum;

        }
        if(sum < 0){
            sum = 0;
        }
    }
    cout<<maxi<<endl;
    return 0;

}
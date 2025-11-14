#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int arr[4]={1,-2,3,4};
    int n = 4;
    int sum;
    int maxi_sum = INT_MIN;
    //print all subarrays
    //first index
    for(int i = 0 ; i < n ; i++){
        //second index
        for(int j = i ; j < n ; j++){
            //print from first index to second index
            sum = 0;
            for(int k = i ; k <= j ; k++){
                sum = sum + arr[k];
                if(sum > maxi_sum){
                    maxi_sum = sum;
                }
            }
           
        }
    }
    cout<<maxi_sum<<endl;
    return 0;
}
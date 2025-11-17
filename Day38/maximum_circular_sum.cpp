#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int main()
{
    int arr[] ={-6,-2,-7,-1,-4,-11};
    int n = 6;
    int sum = 0;
    int ans1= INT_MIN;
    //ans1 from kadane
    for(int i = 0 ; i < n ; i++){
       sum += arr[i]; 

       if(sum > ans1){
        ans1 = sum;
       }
       if(sum < 0){
        sum = 0;
       }

    }
    if(ans1 < 0){
        cout<<ans1<<endl;
        return 0;
    }


    //minimum sum (ans2)   //total sum - minimum sum
    int total_sum = 0;
    for(int i = 0 ; i < n ; i++){
       total_sum += arr[i];
       arr[i]= (-1)*arr[i];
    }

    int ans2=INT_MIN;
    int sum2=0;
    for(int i = 0 ; i < n ; i++){
        sum2 += arr[i];
        if(sum2 > ans2){
            ans2 = sum2;
        }
        if( sum2 < 0){
            sum2 = 0;
        }
    }
    //ans2 is minimum subarray sum   ///-total_sum+ans2
    //find maximum in flipped array
    // int c;
    // if(a1 > a2){
    //     c= a1;     int c = max(a1,a2);
    // }
    // else{
    //     c=a2;
    // }

    int res = max(ans1 , total_sum+ans2);
    cout<<res<<endl;
    return 0;
}
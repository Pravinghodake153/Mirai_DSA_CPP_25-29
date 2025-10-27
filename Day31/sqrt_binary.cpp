#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int start = 1;
    int end = n;
    int ans = 1;

    while( start <= end){
        int mid = start + (end - start)/2;
        if( mid * mid <= n ){
            //mid may be answer
            ans = mid;
            start = mid + 1;
        }
        else {
            end = mid -1;
        }
    }
    cout<<ans<<endl;
    return 0;
}
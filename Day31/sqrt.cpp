#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ans = 1;
    while(ans*ans <= n){
        ans++;
    }
    cout<<ans-1<<endl;
    return 0;
}
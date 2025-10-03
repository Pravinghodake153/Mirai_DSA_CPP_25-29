#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int num;
    int i = 1;
    int ans = 0;

    while( i <= n){
      cin>> num;

      ans = ans ^ num;



        i++;
    }
    cout<<ans<<endl;

}
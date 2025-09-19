#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n; //number - 2423545
    int digit;
    cin>>digit;  //digit -0
    int count = 0;

    while(n != 0){
        int d = n % 10;
        if(d == digit){
            count = count + 1;
        }
        n = n /10;
    }
    cout<<count;
    return 0;

}
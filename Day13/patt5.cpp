#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int row = 1 ; row <= n ; row++){
        //space
        for(int col = 1; col <=row -1; col++){
            cout<<" ";
        }
        //stars
        for(int col = 1; col <=n-row+1 ; col++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
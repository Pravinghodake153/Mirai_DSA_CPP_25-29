#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int rows = 1; rows <= n ; rows++){
        for(int col = n; col >=rows ; col--){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}
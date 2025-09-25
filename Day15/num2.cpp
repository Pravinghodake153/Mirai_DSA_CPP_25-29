#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int row = 1 ; row <= n ; row++){
        int num = 1; //after printing first row it will agagin initialize with 1
        for(int col = 1; col <= row ; col++){
            cout<<num;
            num++;
        }
        cout<<endl;
    }
    return 0;
}
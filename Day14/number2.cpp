#include<iostream>
#include<iomanip> //setw 
using namespace std;

int main()
{
    int n;
    cin>>n;
    int no = 1;
    for(int row = 1; row <= n ; row++){
        for(int col = 1 ; col <= row ; col++){
           cout<<setw(8)<<no<<" ";
           no++;
        }
        cout<<endl;
    }
}
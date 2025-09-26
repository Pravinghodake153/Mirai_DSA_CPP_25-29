#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int row = 1; row <= n ; row++){
        char ch = 'A';
        for(int col = 1; col <= n - row+1; col++){
            cout<<ch<<" ";
            ch++;
        }
        ch--; //again back to E
         for(int col = 1; col <= n - row+1; col++){
            cout<<ch<<" ";
            ch--;
        }
        
        cout<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char ch = 'A';
    for(int row = 1; row <= n; row++){
        ch ='A';
        for(int col = 1; col <= row ; col++){
            cout<<ch<<" ";
            ch++;
        }
      
        
        cout<<endl;
    }
    return 0;
}
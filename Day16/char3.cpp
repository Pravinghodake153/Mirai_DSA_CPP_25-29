#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char ch = 'C';
    for(int row = 1; row <= n; row++){
        // ch ='A';//every row must start from A
        for(int col = 1; col <= row ; col++){
            cout<<ch<<" ";
            ch++;
        }
      
        
        cout<<endl;
    }
    return 0;
}
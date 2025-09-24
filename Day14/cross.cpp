#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int row = 1 ; row <= n ; row++){
       for(int col = 1; col <= n ; col++){
        //cross stars
        if(row == col|| row +col == n + 1){
            cout<<"* "; // star followed by space
        }
        else{
            cout<<"  ";//2 spacs
        }
       }

        cout<<endl;
    }
    return 0;
}
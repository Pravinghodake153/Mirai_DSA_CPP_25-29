#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int row = 1; row <= n; row++){
        for(int col = 1 ; col <= n ; col++){
         //middle column
            if(col == n/2+1){
                cout<<"*";
            }

            //middle row
            else if(row == n/2 + 1){
              cout<<"*";
            }
           //first column
            else if(col == 1 && row <= n/2 +1){
                cout<<"*";
            }
            //last column
            else if(col == n && row >= n/2+1){
                cout<<"*";
            }
            //first row
            else if(row == 1 && col >= n/2+1){
                cout<<"*";
            }
            //last row
            else if(row == n && col <= n/2 +1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
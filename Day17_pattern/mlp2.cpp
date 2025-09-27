#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int row = 1; row <= n ; row++){
        for(int col = 1 ; col <= row ; col++){
            //odd rows
            if(row==1){
                cout<<1;
            }
            //first and last column should be row-1
            else if( col == 1 || col == row){
                cout<<row -1;
            }
            else{
                cout<<0;
            }
        }
        cout<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num;
    for(int row = 1; row <= n ; row++){
        //even row
        if(row % 2 == 0){
           num = 0;
        }
        else{
            num= 1;
        }
        for(int col = 1 ; col <= row ; col++){
           cout<<num;
           num = 1- num; //flip; 
        }
        cout<<endl;
    }
    return 0;
}
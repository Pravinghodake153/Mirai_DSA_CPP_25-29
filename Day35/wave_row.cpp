#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int arr[4][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};


    //print wave wise

    for(int row = 0; row <= 3 ; row++){
        if(row % 2 == 0){
        for(int col = 0 ; col <= 4; col++){
            cout<<setw(3)<<arr[row][col];
            

            
        }
        cout<<endl;
    }
    else{
        for(int col = 4 ; col >= 0; col--){
            cout<<setw(3)<<arr[row][col];

            
        }
        cout<<endl;
    }
       
    }
    return 0;
}
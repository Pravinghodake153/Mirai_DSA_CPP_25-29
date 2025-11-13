#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int arr[4][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};


    //print wave wise

    for(int col = 0; col <= 4 ; col++){
        if(col % 2 == 0){
        for(int row = 0 ; row <= 3; row++){
            cout<<arr[row][col]<<" ";
            
        }
        
    }
    else{
        for(int row = 3 ; row >= 0; row--){
            cout<<arr[row][col]<<" ";           
        }
      
    }
       
    }
    return 0;
}
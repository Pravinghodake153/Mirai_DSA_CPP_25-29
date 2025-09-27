#include<iostream>
using namespace std;

int main()
{

    int t ;
    cin>>t;
    int n = t/2+1;

    for(int row = 1; row <= n ; row++){
        // 1st row == 2*n - 1 stars

        if(row == 1){
            for(int col = 1 ; col <= 2* n - 1 ; col++){
                cout<<'*';
            }
        }

        //row is not equal to 1
        else{

            int spaces = 2* row - 3;  //2*(row - 1)-1
            int stars = 2* n -1 - spaces; //half on left side , half on right side

            //left stars
            for(int col = 1 ; col <= stars/2 ; col++ ){
                cout<<"*";
            }

            //space
            for(int col = 1 ; col <= spaces ; col++){
                cout<<" ";
            }
              
            //right stars
            for(int col = 1; col <= stars/2; col++){
                cout<<"*";
            }

        }
        cout<<endl;
    }

     // mirror part
    for(int row = n-1; row >= 1 ; row--){
        // 1st row == 2*n - 1 stars

        if(row == 1){
            for(int col = 1 ; col <= 2* n - 1 ; col++){
                cout<<'*';
            }
        }

        //row is not equal to 1
        else{

            int spaces = 2* row - 3;  //2*(row - 1)-1
            int stars = 2* n -1 - spaces; //half on left side , half on right side

            //left stars
            for(int col = 1 ; col <= stars/2 ; col++ ){
                cout<<"*";
            }

            //space
            for(int col = 1 ; col <= spaces ; col++){
                cout<<" ";
            }
              
            //right stars
            for(int col = 1; col <= stars/2; col++){
                cout<<"*";
            }

        }
        cout<<endl;
    }
    return 0;
}
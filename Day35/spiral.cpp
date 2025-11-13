#include<iostream>
using namespace std;

int main()
{
    int r, c;
    cin>>r>>c;
    int arr[r][c];

    for(int i = 0 ; i < r; i++){
        for(int j = 0 ; j < c ; j++){
            cin>>arr[i][j];
        }
    }

    int top= 0;
    int bottom = r-1;
    int left = 0;
    int right = c-1;

    //top , bottom - col wise print 

    //left , right -row wise print

    //first row 

    for(int i = left ; i <= right ; i++){
        cout<<arr[top][i]<<" ";
    }
    for(int i = top ; i = bottom ; i++){
        cout<<arr[i][right]<<" ";
    }
    return 0;
}
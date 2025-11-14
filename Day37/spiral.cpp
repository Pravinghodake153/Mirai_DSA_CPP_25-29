#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int arr[n][m]; //array declare of size n*m;n rows m cols

    int num = 1;

    int left = 0;
    int right=m-1; //col -1
    int top = 0;
    int bottom = n-1;  //row -1

    while(top<= bottom && left <= right){
    for(int i = left ; i <= right ; i++){
        arr[top][i]=num++;
    }
    top++;
    for(int i = top ; i <= bottom ; i++){
        arr[i][right]=num++;
    }
    right--;
    if(top <= bottom){
    for(int i = right ; i >= left ; i--){
        arr[bottom][i]=num++;
    }
    
    bottom--;
}
    if(left <= right){
    for(int i = bottom ; i >= top ; i--){
       arr[i][left]=num++;
    }
    left++;
}
}

for(int i = 0 ; i < n; i++){
    for(int j = 0 ; j < m ; j++){
        cout<<setw(4)<<arr[i][j];
    }
    cout<<endl;
}
    return 0;
}
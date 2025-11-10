#include<iostream>
using namespace std;
// int arr[3][4];  //glabaly declare without assigning anything means all 0
// int arr[3][4]={{1,2,3,4},{2,3}}; //partially assigned - rest all 0
int main()
{
    // int arr[3][4];  //locally it will give garbage if not assigned anything

    int arr[3][4]={{1,2,3,4},{2,3}}; //local partially declared rest all 0
  for(int i = 0 ; i < 3; i++){
    for(int j = 0; j < 4; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}
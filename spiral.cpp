#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;


    int left  =0;
    int right =n-1;  //these both are horizontal

    int top = 0;
    int bottom = n-1;
    int num = 1;

    for(int i = left ; i <=right ; i++){
        cout<<num<<" ";
        num++;
    }

    top++; // because i have to print only 3 numbers
    for(int i = top; i <= bottom ; i++){
        cout<<num<<" ";
        num++;
    }
    right--;
    for(int i = right ; i>=left ; i--){
        cout<<num<<" ";
        num++;
    }
    return 0;
}
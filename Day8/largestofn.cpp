#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n; //total no of numbers
    int num;
    int i = 1;
    int largest = INT_MIN;
    while(i <= n){
        cin>>num;
        if(largest < num){
            largest = num;
           
        }
        i = i+1; 
    }
    cout<<largest<<endl;
    return 0;
}
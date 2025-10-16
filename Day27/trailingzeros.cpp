#include<iostream>
using namespace std;


int trailingzeros(int n){
    int ans = 0;  

    //i have to calculate how many times 5 comes

    for(int i = 5 ; n/i >= 1      ; i=i*5){
        ans += n/i;
    }
    return ans;

}


int main(){
    int n;
    cin>>n;

    cout<<trailingzeros(n);

    return 0;


}
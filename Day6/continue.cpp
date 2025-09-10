#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i =1;
    while(i <= n){
        if(i%3 == 0|| i%5 == 0){
            i = i+1;
            continue; //skip the iterations and take control back to the loop
        }
        cout<<i<<endl;
        i = i+1;
    }
}
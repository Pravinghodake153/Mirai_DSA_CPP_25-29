#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int even = 0;
    int odd = 0;
    while( n > 0){
        int d = n % 10;
        if(d% 2 == 0){
            even += d;
        }
        else{
            odd+=d;
        }
        n /= 10;
    }
    cout<<even<<endl;
    cout<<odd;
    return 0;
}


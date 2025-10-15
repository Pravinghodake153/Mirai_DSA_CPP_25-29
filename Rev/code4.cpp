#include<iostream>
using namespace std;

int main()
{
    int i = 1;
    while(i <= 10){
        if(i % 3 == 0){
            i=i+1;
            continue;
        }
        cout<<i<<endl;
        i = i+1;
    }
}
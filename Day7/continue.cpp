#include<iostream>
using namespace std;
int main()
{
    int i = 1;
    while(i <= 20){
        // if(i == 3){
        //     i=i+1;
        //     continue;
        // }

        if( i %3 == 0  or i % 5 == 0){
            i = i +1 ; //i++

             continue;
        }
        cout<<i<<endl;
        i = i+1;
        // if(i == 3){
        //     continue;
        // }
    }
    return 0;
}
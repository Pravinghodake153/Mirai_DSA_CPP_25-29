#include<iostream>
using namespace std;
int main()
{
    int i = 1;
    while(i >=1){
        if(i == 11){
            break; //used to terminate the loop and takes the control to immediate next line after loop
        }
        cout<<i<<endl;
        i = i+1; //infinite loop without break
    }
    return 0;
}
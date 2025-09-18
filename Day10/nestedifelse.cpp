#include<iostream>
using namespace std;
int main()
{
    int marks;
    cin>>marks;
    if(marks>=60){
        if(marks >= 80){
            cout<<"A Grade";
        }
        else{
            cout<<"B Grade";
        }

    }else{
        cout<<"Fail";
    }
    return 0;
}
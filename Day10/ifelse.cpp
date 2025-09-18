#include<iostream>
using namespace std;
int main()
{
    int age;
    cin>>age;

    if(age >= 18){
        cout<<"Adult"; //condition true then this block will execute
    
    }
    else{
        cout<<"Not an Adult"; //condition false
    }
    return 0;
}
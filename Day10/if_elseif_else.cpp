#include<iostream>
using namespace std;

int main(){
    int marks;
    cin>>marks;

    if(marks>=90){
        cout<<"A";
    }
    else if (80 <= marks && marks <90){
        cout<<"B";
    }
    else if(70<=marks && marks <80){
        cout<<"C";
    }
    else if(50<=marks && marks<70){
        cout<<"D";
    }
    else{
        cout<<"Fail"; //execute only when all upper 4 are false
    }
    return 0;
}
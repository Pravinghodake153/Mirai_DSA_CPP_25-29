#include<iostream>
using namespace std;

void show(int a , char b){
    cout<<a<<" "<<b<<endl;
}

void show2(char a , int c){
    cout<<a<<" "<<c<<endl;
}

int main()
{
    show(3 , 'S');
    show('S', 84);
    

    return 0;
}
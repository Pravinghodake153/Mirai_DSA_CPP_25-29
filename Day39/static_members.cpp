#include<iostream>
using namespace std;
void func(){
    static int cnt = 0;
    cnt++;
    cout<<cnt<<endl;
}

int main(){

    func();
    func();
    func();
    return 0;
}
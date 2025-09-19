#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n; // total no of inputs
    while(n--){
      long long a , b;
      cin>>a>>b;

      long long rev_a = 0;
      while(a != 0){
        int d = a% 10;
        rev_a = rev_a * 10 + d;
        a = a / 10;
      }





    }
}
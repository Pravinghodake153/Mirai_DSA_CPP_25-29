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
      long long rev_b = 0;
      while(b != 0){
        int d = b % 10;
        rev_b = rev_b * 10 + d;
        b /= 10;
      }
      long long sum = rev_a + rev_b;
      long long rev_sum = 0;
      while(sum != 0){
        int d = sum % 10;
        rev_sum = rev_sum * 10 + d;
        sum /= 10;
      }

     cout<<rev_sum<<endl;

    }
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count = 0; // total no of digits

    while( n > 0)
{
    int d = n % 10;
    count = count + 1;
    n = n/10;


}
cout<<count;
return 0;
}
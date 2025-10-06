#include<iostream>
using namespace std;

int arr[10] ;//globally remaining zer0
int main()
{
    int arr3[10]; //garbage value 
    int arr2[10] = {1}; //locally rewmaining zero
    for(int i = 0 ; i < 10 ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
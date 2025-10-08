#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int arr[] ={ 1, 3,452,5353,533,4542,542,547,532};
    int n = sizeof(arr)/sizeof(int);
    int lar = INT_MIN;
    int second_lar = INT_MIN;
    for(int i = 0 ; i < n ; i++){
        if(arr[i]> lar){
            second_lar = lar; //first update second lar
            lar = arr[i];
        }
        else if( arr[i] > second_lar && arr[i] != lar){
            second_lar = arr[i];
        }
    }
    cout<<lar<<" "<<second_lar;
    return 0;
}
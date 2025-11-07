#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int lar=INT_MIN;
    int profit;
    for(int j=0; j<=n-2; j++){
        for(int k=j+1; k<=n-1; k++){
           profit=arr[k]-arr[j];
         if(profit>lar){
            lar=profit;

         }

        }

    }cout<<lar<<endl;
    return 0;
}
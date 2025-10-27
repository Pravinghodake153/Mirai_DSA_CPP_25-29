#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i = 0 ; i < n; i++){
    cin>>arr[i];  //array must be sorted
   }
   int target;
   cin>>target;

   int start = 0;
   int end = n-1;

   while( start <= end){
     int mid = (start + end)/2;

     if(arr[mid] == target){
        cout<<mid<<endl;
        return 0;
     }
     else if(arr[mid] < target){
        // left part is smaller we have to search in right part

        start = mid + 1;
     }
     else{
        // arr[mid] > target - right side all elements are greater
        end = mid -1;
     }


   }

   cout<<"No element found"<<endl;
   return 0;





}
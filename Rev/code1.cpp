#include<iostream> //code m iostream file 
using namespace std;
int main()
{

   int n;
   cin>>n; //user apna input dega

   if(n>50){
    cout<<"Good";
   }
   else if ( 30<= n  && n<= 50){ //and basically jab dono true honge tab chalega 
    cout<<"average";
   }
   else{
    cout<<"bad";
   }

    return 0;

}
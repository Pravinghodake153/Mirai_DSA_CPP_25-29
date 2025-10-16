#include<iostream>
using namespace std;
//true or false - if n prime then it will return true
bool checkPrime(int n){
   if(n == 2){
    return true;
   }

   //get a factor 2
   if( n % 2 == 0){
      return false;

   }
   //consider only odd factors skip - 4,6,8,10
   for(int i = 3 ; i*i<=n ; i+= 2){
    if( n % i == 0){
        return false;
    }
   }
   return true;

}

int sumofDigits(int n){
    int sum = 0;
    while(n != 0){
        int digit = n % 10;
        sum += digit;
        n = n/10;
    }
    return sum;
}

int sumofPrime(int n){

    int sum_prime = 0;
    //all factors with 2
    while(n % 2 == 0){
        sum_prime += 2;
        n = n/2;
    }
   // check for only odd factors
    for(int i = 3 ; i*i <= n ; i+=2){ //i == 11 == 1+1 //+11  //n = 26 2 
       while(n % i == 0){
        sum_prime += sumofDigits(i);
        n = n/i;
       }
    }

    //n is still left
    if(n > 2){
        sum_prime += sumofDigits(n);
    }
    return sum_prime;
}



int main()
{
    int n;
    cin>>n;  // check n is Boston or not

    // 1- N must be composite no , if n is prime it is not a Boston no
    if(checkPrime(n)){ 
        cout<<"Not a Boston Number"<<endl;
        return 0;//program will terminate 
    }

    if(sumofDigits(n) == sumofPrime(n)){
        cout<<"Boston Number"<<endl;
    }
    else{
         cout<<"Not a Boston Number"<<endl;
    }
    return 0;

}
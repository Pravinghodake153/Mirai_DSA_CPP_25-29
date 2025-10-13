#include<iostream>
using namespace std;

// return_type function_name ()

void function(){  //void will not return anything - null
    cout<<"Satyam"<<endl;
}

int sum(int a , int b){  //integer function it will return integer 
    int c = a+b;
    return c;  // c is an integer return sum --return a+b
    
}

int main()
{
    //i must have call the function

    function();  // calling the function (direct call and print)
   

    cout<<sum(5,7); //we have to provide arguments while calling  -- we have to use cout for printing

    return 0;
}
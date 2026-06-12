#include<iostream>
using namespace std;
int main()
{
    int  num1,count=0;
    cout<<"Enter the number to check whether it is prime or not";
    cin>>num1;

     if(num1<=1)
     {
        cout<<"it is  not prime";
     } 
     else
     {
        for(int i=2;i<num1;i++)
        if(num1%i==0)
        {
            count++;
        }
     }

     if(count==0)
     {
        cout<<"it is  prime";
     }
     else
     {
        cout<<"it is not prime";
     }

     return 0;
}

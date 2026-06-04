#include<iostream>
using namespace std;
int main()
{
    int i=0,j=1,k,num1,term;
    cout<<"Enter the term number \n";
    cin>>num1;

    if(num1==1)
    {
        cout<<"The "<<num1<<" term of fibonacci series is 0";
        return 0;
    }
  
    if(num1==2)
    {
        cout<<"The "<<num1<<" term of fibonacci series is 1";
        return 0;
    }
    for(term=3;term<=num1;term++)
    {
       k=i+j;
       i=j;
       j=k;
    }
    
   cout<<"The "<<num1<<" term of fibonacci series is "<<j;

}
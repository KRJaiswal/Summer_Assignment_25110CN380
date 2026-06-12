#include<iostream>
using namespace std;
int main()
{
    int i=1,num1,num2,min,lcm,gcd;
    
    cout<<"Enter the number1";
    cin>>num1;
     
    cout<<"Enter the number2";
    cin>>num2;
    //find a min number;
    if(num1<num2)
    {
        min=num1;
    }
    else 
    {
        min=num2;
    }
     while(i<=min)
    {
        if((num1%i==0)&&(num2%i==0))
        {
            gcd=i;
        }
        i++;
    }     
    lcm=(num1*num2)/gcd;
     cout<< "lcm is "<<lcm;
    return 0;
}

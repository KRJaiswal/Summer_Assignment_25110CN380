#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num,i,j=0,sum=0;
    cout<<"Enter the number";
    cin>>num;
    int temp=num;

     while(num!=0)
     {
        
        j++;
        num=num/10;

     }
     num=temp;
        while(num!=0)
        {
            int digit = num%10;
            sum=sum+round(pow(digit,j));
            num=num/10;
        }



     if(sum==temp)
     {
        cout<<"the give no is armstrong";
     }
     else
     {
        cout<<"it is not armstrong";
     }

}
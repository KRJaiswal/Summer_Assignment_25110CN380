#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   int first ,last;

   cout<<"Enter the first number";
   cin>>first;

   cout<<"Enter the last number";
   cin>>last;

   for(int i=first;i<=last;i++)
{
   
   
    int num=i;
    int temp =i;
    int j=0;
    
    if(num==0)
    {
        j=1;
    }
    else
    {
    while(num!=0)
    {
        j++;
        num=num/10;
    }
    }
    num=temp;
    int sum=0;
   while(num!=0)
   {
    int digit=num%10;
    sum=sum+round(pow(digit,j));
    num=num/10;
   }
   if(sum==temp)
   {
    cout<<temp<<"\n";
   }
}
return 0;
}
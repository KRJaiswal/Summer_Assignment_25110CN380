#include<iostream>
int main()
{
   int num1,i,sum=0;
   std::cout<<"Enter the number";
   std::cin>>num1;
   while (num1!=0)
   {
      i=num1%10;
      sum=sum+i;
      num1=num1/10;

   }
   std::cout<<"the sum of digit is:"<<sum;
   return 0;
   
}
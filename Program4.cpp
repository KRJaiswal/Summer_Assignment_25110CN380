#include<iostream>
int main()
{
   int i=0,num;
   std::cout<<"Enter the number";
   std::cin>>num;
   while(num!=0)
   {
       num=num/10;
       ++i;
   }
   std::cout<<"the number of digit is "<< i;
   return 0;


}
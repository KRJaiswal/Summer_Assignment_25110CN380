#include<iostream>
int main()
{
    int num1,i;
    std::cout<<"Enter the number";
    std::cin>>num1;
  
    while(num1!=0)
    {
       i=num1%10;
       std::cout<<i;
       num1=num1/10;
       
    }
    return 0;
}
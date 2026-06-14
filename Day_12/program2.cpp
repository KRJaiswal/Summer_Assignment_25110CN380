#include<iostream>
#include<cmath>
void armstrong(int n)
{
    int num =n;
    int count=0;
    while(n!=0)
    {
        count++;
        n=n/10;
    }
    int sum=0;
  int    initial=num;
    while(num!=0)
    {
        sum=sum+(int)(pow((num%10),(count)));
        num=num/10;
    }
    if(initial==sum)
    {
       std::cout<<"it is armstrong";
    }
    else{
      std::cout<<"it is not armstrong";
    }
}
int main()
{
    int x;
    std::cout<<"Enter the number";
    std::cin>>x;
    armstrong(x);
}
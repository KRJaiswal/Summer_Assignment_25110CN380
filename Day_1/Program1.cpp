#include<iostream>
int main()
{
    int num1;
    std::cout<<"enter the number";
    std::cin>>num1;
    int sum=0;
    while(num1!=0)
    {
        sum=sum+num1;
        --num1;
    }
    std::cout<<sum;
    
}

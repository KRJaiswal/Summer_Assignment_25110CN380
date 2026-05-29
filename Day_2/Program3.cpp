#include<iostream>
int main()
{
    int num1,i,product=1;
    std::cout<<"Enter the number";
    std::cin>>num1;
    while (num1!=0)
    {
        i=num1%10;
        product=product*i;
        num1=num1/10;
    }
    std::cout<<product;
    return 0;
}
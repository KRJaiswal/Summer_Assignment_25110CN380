#include<iostream>
int main()
{
    int num1,i,n=0;
    std::cout<<"Enter the number";
    std::cin>>num1;
    int n1=num1;
    while(num1!=0)
    {
        i=num1%10;
        n=(n*10)+i;
        num1=num1/10;

    }
    if(n1==n)
    {
        std::cout<<"number is palindrome";
    }
    else
    {
        std::cout<<"it is not palindrome";
    }
    return 0;
}
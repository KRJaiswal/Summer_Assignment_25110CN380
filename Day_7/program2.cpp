#include<iostream>

 int fibonacci(int n)
 {
    if(n==1)
    {
        return 0;
    }

    if(n==2)
    {
        return 1;
    }

    else
    {
        return  fibonacci(n-1)+fibonacci(n-2);
    }
 }

 int main()
 {
    int num;
    std::cout<<"Enter the term no";
    std::cin>>num;
    fibonacci(num);
    std::cout<<fibonacci(num);
 }
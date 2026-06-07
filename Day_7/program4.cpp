#include<iostream>

int reverse(int n,int rev=0)
{
    if(n==0)
    {
        return rev;
    }
    else
    rev=(rev * 10)+(n%10);
    return reverse(n/10,rev);
}

int main()
{
    int num;
    std::cout<<"Enter the number";
    std::cin>>num;
    std::cout<<reverse(num);

    return 0;
}

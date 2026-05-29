#include<iostream>
int num;.
int main()
{
    int i,factorial=1;
    std::cout<<"Enter the number";
    std::cin>>i;
    while(i!=0)
    {
        factorial=factorial*i;
        --i;
        ::num=factorial;
    }
    std::cout<<num;
    return 0;

}
        
     

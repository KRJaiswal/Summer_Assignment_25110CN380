#include<iostream>
int factorial(int n)
{
    
    if( n==1)
    {
        return 1;
    }
    else
    {
       
       return n*factorial(n-1);
        
    }
    
  
    
}


int main()
{
int x;
std::cout<<"enter the number ";
std::cin>>x;
factorial(x);
std::cout<<factorial(x);


}
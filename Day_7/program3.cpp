#include<iostream>
 
int sum(int n)
{
    
 if(n==0)
 {
    return 0;
 }
 else
{   
    
    return n%10+sum(n/10);
    

}
}

int main()
{
    int num;
    std::cout<<"Enter the no";
    std::cin>>num;
    sum(num);
    std::cout<<sum(num);

}
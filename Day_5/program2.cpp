#include<iostream>
int main()
{
    int num,array[10];
    std::cout<<"Enter the number";
    std::cin>>num;
    int temp=num;
    int j=0;
    while(num!=0)
    {
        int digit;
        digit=num%10;

        
         
        int fact=1;
        for (int i=1;i<=digit;i++)
        {
            fact=fact*i;
        }
        
        array[j]=fact;
        j++;

        num=num/10;
    }
    

    int sum=0;
    for(int k=0;k<j;k++)
    {
        sum=sum+array[k];
      
    }
     
    if(temp==sum)
    {
        std::cout<<"IT is strong number";
    }
    else
    {
        std::cout<<"it is not strong number";
    }

}
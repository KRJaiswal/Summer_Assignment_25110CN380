#include<iostream>
int main()

{
  int num,i=1,multifactor;
  std::cout<<"Enter the no for table \n";
  std::cin>>num;
  std::cout<<"\nEnter the no of term\n";
  std::cin>>multifactor;
  while(i<=multifactor)
  {
    std::cout<<num<<"*"<<i<<"="<<num*i<<"\n";
    ++i;
  }
  return 0;
}
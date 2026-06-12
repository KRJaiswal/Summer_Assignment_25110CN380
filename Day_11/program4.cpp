#include<iostream>
using namespace std;
int fact(int num)
{   int product=1;
     while(num>0)
    {
     
    product=product*num;
    num--;
    }
    return product;
}
int main()
{
    int i;
    cout<<"Enter the number to find factorial";
    cin>>i;
    cout<<"The factorial is"<< fact(i)<<endl;
}
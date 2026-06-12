#include<iostream>
using namespace std;
void prime(int num)
{
    if(num==1||num==0)
    {
        cout<<"it is not prime";
        return;
    }
    for(int i=2;i<num;i++)
    {
    if(num%i==0)
    {
        cout<<"it is not a prime no";
        return;
    }
    
    }
    cout<<"It is prime";

}
int main()
{
int i;
cout<<"Enter the number";
cin>>i;
 prime(i);
}
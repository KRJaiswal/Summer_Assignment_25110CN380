#include<iostream>

using namespace std;
int main()
{
int base;
int exponent;

cout<<"Enter the base";
cin>>base;
int num=base;
cout<<"Enter the exponent";
cin>>exponent;

int answer=1;

for( int i=1;i<=exponent;i++)
{
    answer=answer*base;
    
}

cout<<answer;
}
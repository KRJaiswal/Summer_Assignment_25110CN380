#include<iostream>
using namespace std;
int main()
{
    int i,j,num;
    cout<<"Enter the no. of row";
    cin>>num;

    for( i=1;i<=num;i++)
    {
        for(j=num-i;j>=0;j--)
        {
           cout<<"*";
        }
    cout<<"\n";
    }


}
#include<iostream>
using namespace std;
int main()
{
    int i,j,k,num;
    cout<<"Enter the number of row";
    cin>>num;

    for(int i=num;i>=1;i--)
    {
        for(j=1;j<=num-i;j++)
        {
            cout<<" ";
        
        }

        for(int k=1;k<=(2*i-1);k++)
        {
            cout<<"*";
        }
         cout<<"\n";

    }
    
   
}
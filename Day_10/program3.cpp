#include<iostream>
using namespace std;
int main()
{
    int i,j,k,num;
    cout<<"Enter the number of row";
    cin>>num;

    for(int i=1;i<=num;i++)
    {
        for(j=1;j<=num-i;j++)
        {
            cout<<" ";
        
        }

        for(int k=1;k<=i;k++)
        {
            cout<<k;
        }
        for(int x=i-1;x>=1;x--)
        {
            cout<<x;
        }
         cout<<"\n";

    }
    
   
}
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

        for(char k='A';k<'A'+i;k++)
        {
            cout<<k;
        }
        for(char x='A'+i-2;x>='A';x--)
        {
            cout<<x;
        }
         cout<<"\n";

    }
    
   
}
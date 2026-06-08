#include<iostream>
using namespace std;
int main()
{
    int i,j,m;
    cout<<"Enter the number of row";
    cin>>m;

    for( i=1;i<=m;i++)
    {
        for(j=1;j<=i;j++)
        {
           cout<<j;
        }

        cout<<"\n";
    }
   return 0;    
    
}
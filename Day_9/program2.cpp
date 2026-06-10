#include<iostream>
using namespace std;
int main()
{
    int i,j,num;
    cout<<"Enter the number of row";
    cin>>num;
    for(i=0;i<num;i++)
    {
        
        
            for(int j=1;j<=num-i;j++)
            {
            cout<<j;
            }
        cout<<"\n";
    }

}
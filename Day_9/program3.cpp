#include<iostream>
using namespace std;
int main()
{
    int i,num,j;
    char k=65;
    cout<<"Enter the no of row";
    cin>>num;
    for(i=1;i<=num;i++)
    {
        for(j=0;j<i;j++)
        {
            cout<<(char)(k+i-1);
        }
        cout<<"\n";
    }
}
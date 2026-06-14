#include<iostream>
using namespace std;
void fibonacci(int n)
{
    int i=0;
    int j=1,sum=0;

    for(int k=1;k<=n;k++)
    {
        cout<<i<<"\n";
       sum=i+j;
       i=j;
       j=sum;
       

    }
}
int main()
{
    int x;
    cout<<"Enter the no of term";
    cin>>x;
    fibonacci(x);
}
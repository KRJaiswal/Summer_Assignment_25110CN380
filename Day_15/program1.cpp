#include<iostream>
void swap(int &m, int &n)
{
    int k=m;
    m=n;
    n=k;
}
using namespace std;
int main()
{

    int n;
    cout<<"Enter the no of element";
    cin>>n;

    int array[n];
    cout<<"Enter the element of array";
    for( int i=0;i<n;i++)
    {
      cin>>array[i];
    }

    
    for(int j=0;j<n/2;j++)
    {
         swap(array[j],array[n-j-1]);
    }

for( int i=0;i<n;i++)
    {
      cout<<array[i]<<"\n";
    }





}
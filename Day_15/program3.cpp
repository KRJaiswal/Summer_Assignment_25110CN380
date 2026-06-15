#include<iostream>
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
    cout<<"\n";
   for( int i=0;i<n;i++)
    {
      cout<<array[i];
    }
    cout<<"\n";
    int temp=array[n-1];

    for(int j=n-1;j>0;j--)
    {
        array[j]=array[j-1];
    }
    array[0]=temp;
 
    for( int i=0;i<n;i++)
    {
      cout<<array[i];
    }
    cout<<"\n";
}

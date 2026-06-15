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
    int temp=array[0];

    for(int j=0;j<n-1;j++)
    {
        array[j]=array[j+1];
    }
    array[n-1]=temp;
 
    for( int i=0;i<n;i++)
    {
      cout<<array[i];
    }
    cout<<"\n";
}

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
    int small=array[0];
    int large=array[0];
     for( int j=0;j<n;j++)
    {
        if(large<array[j])
        {
           large=array[j];
        }
    }
    for( int k=0;k<n;k++)
   {
        if(small>array[k])
        {
           small=array[k];
        }
    }
    cout<<"The largest element is : "<<large<<"\n";
    cout<<"The smallest element is : "<<small<<"\n";
}
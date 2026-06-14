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
    cout<<"The element of array is :";
    for( int j=0;j<n;j++)
    {
         cout<<"\n"<<array[j]<<"\n";
    }


}
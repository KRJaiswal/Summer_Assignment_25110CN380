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
    int sum=0,average;
    cout<<"The sum of element is : ";
    for( int j=0;j<n;j++)
    {
        sum=sum+array[j];
    }
    cout<<sum<<"\n";
    
    average=sum/n;
    cout<<"The average of element is : "<<average;
}
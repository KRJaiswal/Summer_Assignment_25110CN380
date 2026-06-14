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
      int x;
    cout<<"Enter the element from array to find its position";
    cin>>x;

    for(int j=0;j<n;j++)
    {
       if(array[j]==x)
       {
         cout<<"The position is "<<j+1;
         break;
       }
    }
}
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
   int even=0,odd=0;
  for( int i=0;i<n;i++)
    {
      if(array[i]%2==0)
      {    
        even++;
       } 
     else
      { 
         odd++;
      }
    }
    cout<<"The number of even term is "<<even<<"\n";
    cout<<"The number of odd term is "<<odd<<"\n";
}

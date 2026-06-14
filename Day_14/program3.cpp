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
    int large=array[0];
    int seclarge=array[0];

    for(int j=0;j<n;j++)
    {
        if(array[j]>large)
        {
             seclarge=large;
            large=array[j];
    
        }
        else if((array[j]<large)&&(array[j]>seclarge))
        {
            seclarge=array[j];
        }
    }

    cout<<"The second largest element is "<<seclarge;
}



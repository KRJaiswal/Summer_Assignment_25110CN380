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

    for(int k=0;k<n;k++)
    {
        for(int x=k+1;x<n;x++)
        {
            if(array[k]==array[x])
            {
                cout<<"The duplicate element is "<< array[k]<<endl;
            }
        }
    }

}
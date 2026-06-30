
#include<iostream>
using namespace std;
int main()
{

    int n;
    cout<<"Enter the no of element";
    cin>>n;

    int array1[n];
    cout<<"Enter the element of array";
    for( int i=0;i<n;i++)
    {
      cin>>array1[i];
    }
    int m;
    cout<<"Enter the no of element";
    cin>>m;

    int array2[m];
    cout<<"Enter the element of array";
    for( int j=0;j<m;j++)
    {
      cin>>array2[j];
    }
   
    int array3[m+n];
    int x=0,k=0,y=0;

    while(x<n && y<m)
    {
         
         if(array1[x]<array2[y])
        {
           array3[k]=array1[x];
           x++;
           k++;
        }
        else
        {
            array3[k]=array2[y];
            y++;
            k++;
        }
    }
    while(x<n)
    {
        array3[k]=array1[x];
        x++;
        k++;
    }
     while(y<m)
    {
        array3[k]=array2[y];
        y++;
        k++;
    }
     
    cout<<"The merge array is ";
    for(int p=0;p<m+n;p++)
    {
        cout<<array3[p]<<"\n";
    }
}
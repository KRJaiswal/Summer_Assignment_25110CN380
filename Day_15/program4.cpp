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

int count =0;
for(int k=0;k<n;k++)
{
    if(array[k]!=0)
    {
        array[count]=array[k];
        count++;
        
    }
}
    while(count<n)
    {
        array[count]=0;
        count++;
    }

     for( int j=0;j<n;j++)
    {
      cout<<array[j];
    }

}

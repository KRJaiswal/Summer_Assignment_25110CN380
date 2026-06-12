#include<iostream>
using namespace std;
int max( int array[],int num)
{
   int  max = array[0];
    for(int i=0;i<num;i++)
    {
       if(array[i]>max)
       {
        max=array[i];
       }
    }
    return max;
}
int main()
{
    int x;
   cout<<"Enter the no. of element";
   cin>>x;
   int arr[x];
   cout<<"Enter the element";
   for(int j=0;j<x;j++)
   {
    cin>>arr[j];
   }
   cout<<"The max element is "<<max(arr,x);// in function only arr is written
}
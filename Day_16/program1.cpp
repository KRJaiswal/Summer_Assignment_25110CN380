#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no of element";
    cin>>n;
    int array[n-1];
    int x=(n*(n+1))/2;
    cout<<"enter the element";
    for(int i=0;i<n-1;i++)
    {
        cin>>array[i];
    }
    int sum=0;
    for(int j=0;j<n-1;j++)
    {
         sum=sum+array[j];
    }
    if(sum==n)
    {
        cout<<"no missing number";
    }
    else
    {
        cout<<"missing number is  "<<x-sum;
    }
    
}
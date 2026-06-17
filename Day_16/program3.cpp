#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no of element";
    cin>>n;
    int array[n];

    cout<<"enter the element";
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    int sum;
    cout<<"Enter the sum";
    cin>>sum;
    for(int k=0;k<n;k++)
    {
        for(int j=k+1;j<n;j++)
        {
            if(array[k]+array[j]==sum)
            {
                cout<<array[k]<<" , "<<array[j]<<endl;
            }
        }
    }
}
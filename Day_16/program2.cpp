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
    
    int maxelement=array[0];
    int maxcount=0;
    
    for(int j=0;j<n;j++)
    {
        int count=0;
       for(int k=0;k<n;k++)
       {
        if(array[j]==array[k])
        {
            count++;
        }
       }
       if(count>maxcount)
       {
        maxcount=count;
        maxelement=array[j];
       }
       
    
    }
    cout<<"maximum frequency element is "<<maxelement<<endl;
    
}
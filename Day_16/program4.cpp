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
     for(int k=0;k<n;k++)
    {
        for(int j=k+1;j<n;j++)
        {
            if(array[k]==array[j])
            {
                for(int x=j;x<n-1;x++)
                {
                   array[x]=array[x+1];
                }
                n--;
                j--;
            }
        }
    }
    cout<<"after remove duplicate";
    for(int v=0;v<n;v++)
    {
        cout<<array[v]<<" "<<endl;
    }

}
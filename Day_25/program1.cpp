#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the size of first sorted array";
    int m;
    cin>> m;
    int array1[m];
    cout<<"Enter the first sorted array";
    for(int i=0;i<m;i++)
    {
        cin>>array1[i];
    }


    cout<<"Enter the size of second sorted array";
    int n;
    cin>> n;
    int array2[n];
    cout<<"Enter the second sorted array";
    for(int j=0;j<n;j++)
    {
        cin>>array2[j];
    }


    int result[m+n];
    int x=0,y=0,v=0;

while (x < m && y < n )
{
    if(array1[x]<array2[y])
    {
       result[v]=array1[x];
       x++;
       v++;
    }
    else
    {
        result[v]=array2[y];
        y++;
        v++;
    }
}


while(x<m)
{
    result[v]=array1[x];
    x++;
    v++;
}

while(y<n)
{
    result[v]=array2[y];
    y++;
    v++;
}

cout<<"The merge array is \n ";
for(int q=0;q<m+n;q++)
{
    cout<<result[q]<<endl;
}
}
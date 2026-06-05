#include<iostream>
using namespace std;
int main()
{
    int num;
     cout<<"Enter the number";
    cin>>num;
    int array[num];
    int j=0;

    

    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
            array[j]=i;
            j++;
        }
    }
    int sum=0;
    for(int x=0;x<j;x++)
    {
        sum=sum+array[x];

    }

    if(num==sum)
    {
        cout<<"The number is perfect";
    }
    else
    {
        cout<<"The number is not perfect";
    }



}

#include<iostream>
using namespace std;
int main()
{
    int num ;
cout<<"Enter the number";
cin>>num;


int large =-1;
int m;

for(int i=1;i<=num;i++)
{
    if(num%i==0)
    {
        if(i==1)
        {
            continue;
        }

          m=1;
        for(int k=2;k<i;k++)
        {
           if(i%k==0)
           {
              m=0;
              break;
           }
        }
        if(m==1){
            large=i;
        }
    }
}

cout<<large;
cout<<"\n";



}
#include<iostream>
#include<vector>
using namespace std;
void perfect(int n)
{
    vector<int>factor;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            factor.push_back(i);
        }
    }
    int m=factor.size();
   int sum=0;
    for(int j=0;j<m;j++)
    {
      sum=sum+factor[j];
    }

    if(n==sum)
    {
        cout<<"IT is perfect ";
    }
    else
    {
        cout<<"it is not perfect ";
    }
}
int main()
{
    int x;
    cout<<"Enter the number";
    cin>>x;
   perfect(x);
}
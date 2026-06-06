#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number";
    cin>>num;
vector<int>binary;
int i;
while(num!=0)
{    
    i=num%2;
    binary.push_back(i);
    num=num/2;
}
int length;
length=binary.size();
int count=0;
for(int j=0;j<length;j++)
{
    if(binary[j]==1)
    {
        count++;
    }
}
 
cout<<count;
 
}
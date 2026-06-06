#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //take the input and store in num;
    int num;
    cout<<"Enter the number \n";
    cin>>num;
     
    //store the binary digit in vector
    int i;
    vector<int> binary;
while (num!=0) 
    
{
    i=num%2;
    binary.push_back(i);
    num=num/2;
}

int j=binary.size();
for(int k=j-1;k>=0;k--)
{
    cout<<binary[k];
}

}
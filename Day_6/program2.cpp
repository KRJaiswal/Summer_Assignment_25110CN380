#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    
    string binary;
    cout<<"Enter binary number";
    cin>>binary;
    int length;
    length=binary.length();
     


    int k,sum=0;
    for(int i=0;i<length;i++)
    {
        int  power = length-1-i;
        k=((binary[i]-'0')*pow(2,power));
        sum =sum+k;
    }

    cout<<sum;

}
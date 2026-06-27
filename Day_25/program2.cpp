#include<iostream>
#include<string>
using namespace std;
int main()
{
    cout<<"Enter the string";
    string s1;
    cin>>s1;

    int n=s1.length();

    cout<<"the common character are  ";
    
    int count[256] = {0};

    for(int i=0;i<n;i++)
    {
        count[s1[i]]++;
    }

    for (int i=0;i<n;i++)
    {
        if(count[s1[i]]>1)
        {
            cout<<s1[i] <<" ";
            count[s1[i]]=0;
        }
    }

}
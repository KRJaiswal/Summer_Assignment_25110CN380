#include<iostream>
#include<string>
using namespace std;
int main()

{
    cout<<"Enter the name";
    string s1;
    cin>>s1;

    int n=s1.length();
    string s2;


    int i=97;
    while( i<=122)
    {
       for(int j=0;j<n;j++)
       {
        if(s1[j]==i)
        {
            s2 +=s1[j];
        }
       }
       i++;
    }

    cout<<" after sorting   "<<s2<<"\n";

}
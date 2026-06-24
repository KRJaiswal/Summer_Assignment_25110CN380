#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1,s2;
   cout<<"Enter the initial word";
   cin>>s1;
   int n=s1.length();
   int j=0;
   
   while( j!=n)
   {
    int count=0;
    int temp=s1[j];

    if(s2.find(temp)!=string::npos)
    {
        j++;
        continue;
    }
   for(int i=0;i<n;i++)
   {
       if(temp==s1[i])
       {
        count++;
       }
   }
   s2.push_back(temp);
   j++;
   }

   cout<<s2;
}
   

   
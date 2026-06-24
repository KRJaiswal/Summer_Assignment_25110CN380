#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1,s2;
   cout<<"Enter the initial word";
   cin>>s1;
   cout<<"Enter the word to find";
   cin>>s2;
   int n = s1.length();
    int flag=0;
   for(int i=0;i<n;i++)
   {
    char temp=s1[0];
     s1.erase(0,1);
    s1.push_back(temp);
    if(s1==s2)
    {
        cout<<"it is find in string rotation"<<endl;
        flag++;
        break;
    }
   }
   if(flag==0)
   {
     cout<<"IT is not found";
   }
   
}
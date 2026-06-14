#include<iostream>
#include<string>
using namespace std;
void palindrome(string num) 
{
    string revnum;
   int n= num.length();
   for(int i=n-1;i>=0;i--)
   {
       revnum = revnum+num[i];
   }
   if(num==revnum)
   {
    cout<<"It is palindrome";
   }
   else
   {
    cout<<"it is not palindrome";
   }
}
int main()
{
    string x;
    cout<<"Enter the number";
    cin>>x;
    palindrome(x);
}
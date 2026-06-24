#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
    string s1,s2;
   cout<<"Enter the sentences"<<"\n";
   getline(cin,s1);
   int n = s1.length();
    int flag=0;

    stringstream ss(s1);
    string word;
    string max="";
    int maximum=0;
    

    while(ss>>word)
    {
     if(word.length()>maximum)
     {
        maximum=word.length();
        max=word;
     }
    }
    cout<<"the maximum letter word is "<<max;

}
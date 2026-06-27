#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    cout<<"Enter the sentence";
    string s1;
    getline(cin,s1);


    stringstream ss(s1);
    string word;
    string words[100];
    int count =0;

    while(ss>>word)
    {
        words[count]=word;
        count++;
    }

    for(int i=0;i<count-1;i++)
    {
        for(int j=i+1;j<count;j++)
        {
            if(words[i].length()>words[j].length())
        {
           string temp =words[i];
           words[i]  =  words[j];
           words[j] =temp;
        }
        }
    }

    cout<<" After sorting   ";
    for(int i=0;i<count;i++)
    {
        cout<<words[i]<<" ";
    }

  return 0;
}
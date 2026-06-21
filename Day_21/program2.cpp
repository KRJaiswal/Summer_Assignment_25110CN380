#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main()
{
    string sentence;
    int word_count=0;
    string word;

    cout<<"Enter the sentence";
    getline(cin,sentence);

    stringstream ss(sentence);

    while(ss>>word)
    {
        word_count++;
    }

    cout<<"number of words "<< word_count <<endl;
}
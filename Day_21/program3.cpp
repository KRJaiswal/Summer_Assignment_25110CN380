#include <iostream>
#include <string>

using namespace std;

int main() {
    string Text;
    int charCounts[256] = {0}; 

    cout << "Enter the  sentence: ";
    getline(cin, Text);

    
    for (int i = 0; i < Text.length(); i++)
  {
        char currenChar = Text[i];
        charCounts[(unsigned char)currenChar]++;
    }

    cout << "\nCharacter frequencies:\n";
    for (int i = 0; i < 256; i++) 
     {
        if (charCounts[i] > 0)
         {
        
            if (i == ' ') 
            {
                cout  << charCounts[i] << endl;
            } else
            {
                cout << (char)i  << charCounts[i] << endl;
            }
        }
    }

    return 0;
}

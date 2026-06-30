#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "";
    int choice;

    while (1) {
        cout << "\n*** STRING OPERATING SYSTEM " << endl;
        cout << "1. Input String" << endl;
        cout << "2. Show String" << endl;
        cout << "3. Check Length" << endl;
        cout << "4. Clear String" << endl;
        cout << "5. Reverse String" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 6) {
            cout << "Closing" << endl;
            break;
        }

        if (choice == 1) {
            cout << "Enter a word: ";
            cin >> str;
            
        }
        else if (choice == 2) {
            if (str == "") {
                cout << "String is empty " << endl;
            } else {
                cout << "Your string is: " << str << endl;
            }
        }
        else if (choice == 3) 
        {
            int len = str.length();
            cout << "Total characters: " << len << endl;
        }
        else if (choice == 4)
         {
            str = "";
            cout << "String wiped clean" << endl;
        }
        else if (choice == 5)
         {
            if (str == "")
             {
                cout << "Nothing to reverse" << endl;
            } else
             {
                string rev = "";
                int len = str.length();
                for (int i = len - 1; i >= 0; i--) 
                {
                    rev = rev + str[i];
                }
                cout << "Reversed string is: " << rev << endl;
            }
        }
        else {
            cout << "Wrong option selected  Try 1 to 6." << endl;
        }
    }

    
}

#include <iostream>
#include <string>

using namespace std;

string names[100];
int rolls[100];
int marks[100];
int total = 0;

void addstudent()
 {
    cout << "enter student name: ";
    cin >> names[total];
    cout << "enter roll number: ";
    cin >> rolls[total];
    cout << "enter marks out of 100 ";
    cin >> marks[total];
    total = total + 1;
    cout << "student added successfully" << endl;
}

void showall() {
    if (total == 0)
     {
        cout << "no student data found" << endl;
        return;
    }
    cout << "--- STUDENT LIST ---" << endl;
    for (int i = 0; i < total; i++)
     {
        cout << "Roll: " << rolls[i] << "  Name: " << names[i] << " Marks: " << marks[i] << endl;
    }
}

void searchstudent() 
{
    int r;
    cout << "enter roll number to search: ";
    cin >> r;
    for (int i = 0; i < total; i++)
     {
        if (rolls[i] == r) {
            cout << "Found!" << endl;
            cout << "Name is: " << names[i] << endl;
            cout << "Marks is " << marks[i] << endl;
            return;
        }
    }
    cout << "roll number not found" << endl;
}

int main() {
    int choice;
    
    while(1) {
        cout << "\n  MAIN MENU " << endl;
        cout << "1. Add Student Details" << endl;
        cout << "2. Show All Students" << endl;
        cout << "3. Search Student by Roll" << endl;
        cout << "4. Exit " << endl;
        cout << "choose any option";
        cin >> choice;
        
        if (choice == 1) {
            addstudent();
        }
        else if (choice == 2) {
            showall();
        }
        else if (choice == 3) {
            searchstudent();
        }
        else if (choice == 4) {
            cout << "thank you " << endl;
            break;
        }
        else {
            cout << "wrong option pressed try again" << endl;
        }
    }
    return 0;
}

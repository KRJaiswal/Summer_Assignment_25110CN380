#include <iostream>
#include <string>

using namespace std;


struct Student {
    int rollNumber;
    string fullName;
    float totalMarks;
};

int main() {
    
    const int MAXSTUDENTS = 50;
    Student schoolRecords[MAXSTUDENTS];
    
    int currentTotalStudents = 0;
    int userChoice = 0;

    cout << "--- STUDENT RECORD SYSTEM ---\n";

    do {
        cout << "1. ADD NEW RECORD" << endl;
        cout << "2. ALL STUDENTS" << endl;
        cout << "3. SEARCH BY ROLL NUMBER" << endl;
        cout << "4. EXIT" << endl;
        cout << "SELECT CHOICE FROM 1TO 4: ";
        cin >> userChoice;

        switch (userChoice) {
            case 1: {
                if (currentTotalStudents < MAXSTUDENTS) {
                    
                    
                    cout << "ENTER ROLL NO: ";
                    cin >> schoolRecords[currentTotalStudents].rollNumber;
                    
                    cin.ignore(); 
                    cout << "ENTER NAME: ";
                    getline(cin, schoolRecords[currentTotalStudents].fullName);
                    
                    cout << "ENTER TOTA LMARKS: ";
                    cin >> schoolRecords[currentTotalStudents].totalMarks;

                    currentTotalStudents++;
                    cout << "RECORD  ADDED" << endl;
                } else {
                    cout << "RECORD IS FULL" << endl;
                }
                break;
            }
            case 2: {
                
                if (currentTotalStudents == 0) {
                    cout << "Filhaal koi records maujud nahi hain." << endl;
                } else {
                    for (int i = 0; i < currentTotalStudents; i++) {
                        cout << i + 1 << ". Roll No: " << schoolRecords[i].rollNumber 
                             << " | Naam: " << schoolRecords[i].fullName 
                             << " | Marks: " << schoolRecords[i].totalMarks << endl;
                    }
                }
                break;
            }
            case 3: {
                int searchRoll;
                bool wasFound = false;
                
                cout << "ENTER ROLL NUMBER";
                cin >> searchRoll;

                for (int i = 0; i < currentTotalStudents; i++) {
                    if (schoolRecords[i].rollNumber == searchRoll) {
                        cout << "\nStudent Mil Gaya!" << endl;
                        cout << "Naam: " << schoolRecords[i].fullName << endl;
                        cout << "Marks: " << schoolRecords[i].totalMarks << endl;
                        wasFound = true;
                        break;
                    }
                }
                
                if (!wasFound) {
                    cout << "not found" << endl;
                }
                break;
            }
            case 4:
                cout << "program is end" << endl;
                break;
            default:
                cout << "wromg choice" << endl;
        }

    } while (userChoice != 4);

    return 0;
}

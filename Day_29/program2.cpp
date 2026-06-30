#include <iostream>

using namespace std;

int main() {
    int arr[100];
    int size = 0;
    int choice;

    while (1) {
        cout << "\n ARRAY MENU" << endl;
        cout << "1. Insert Number" << endl;
        cout << "2. Display Array" << endl;
        cout << "3. Search Number" << endl;
        cout << "4. Delete Number" << endl;
        cout << "5. Clear All" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 6) {
            cout << "Exit" << endl;
            break;
        }

        if (choice == 1) 
        {
            if (size >= 100)
             {
                cout << "Array full" << endl;
            } else
             {
                int val;
                cout << "Enter number to insert: ";
                cin >> val;
                arr[size] = val;
                size = size + 1;
                cout << "Inserted" << endl;
            }
        }
        else if (choice == 2)
         {
            if (size == 0) 
            {
                cout << "Array is empty" << endl;
            } else
             {
                cout << "Array elements: ";
                for (int i = 0; i < size; i++) 
                {
                    cout << arr[i] << " ";
                }
                cout << endl;
            }
        }
        else if (choice == 3)
         {
            if (size == 0) {
                cout << "Nothing to search" << endl;
            } else
             {
                int item, found = 0;
                cout << "Enter number to search: ";
                cin >> item;
                for (int i = 0; i < size; i++)
                 {
                    if (arr[i] == item)
                     {
                        cout << "Found at position: " << i + 1 << endl;
                        found = 1;
                        break;
                    }
                }
                if (found == 0) {
                    cout << "Not found in array" << endl;
                }
            }
        }
        else if (choice == 4) {
            if (size == 0) {
                cout << "Array empty" << endl;
            } 
            else
             {
                int item, index = -1;
                cout << "Enter number to delete: ";
                cin >> item;
                for (int i = 0; i < size; i++) 
                {
                    if (arr[i] == item) {
                        index = i;
                        break;
                    }
                }
                if (index == -1)
                 {
                    cout << " not found" << endl;
                } else 
                {
                    for (int i = index; i < size - 1; i++)
                     {
                        arr[i] = arr[i + 1];
                    }
                    size = size - 1;
                    cout << "Deleted successfully!" << endl;
                }
            }
        }
        else if (choice == 5)
         {
            size = 0;
            cout << "Array cleared!" << endl;
        }
        else
         {
            cout << "Invalid choice! Enter 1 to 6." << endl;
        }
    }

    return 0;
}

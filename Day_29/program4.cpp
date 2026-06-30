#include <iostream>
#include <string>

using namespace std;

string items[100];
int ids[100];
int stocks[100];
double prices[100];
int total = 0;

int main() {
    int choice;

    while (1) {
        cout << "\n*** INVENTORY MANAGEMENT SYSTEM " << endl;
        cout << "1. Add New Item" << endl;
        cout << "2. View All Items" << endl;
        cout << "3. Search Item by ID" << endl;
        cout << "4. Update Stock Quantity" << endl;
        cout << "5. Exit Shop" << endl;
        cout << "Enter selection: ";
        cin >> choice;

        if (choice == 5) {
            cout << "Closing shop manager" << endl;
            break;
        }

        if (choice == 1) {
            if (total >= 100)
             {
                cout << "Store full" << endl;
            } else
             {
                cout << "Enter Item ID : ";
                cin >> ids[total];
                cout << "Enter Item Name : ";
                cin >> items[total];
                cout << "Enter Item Price: ";
                cin >> prices[total];
                cout << "Enter Quantity in Stock: ";
                cin >> stocks[total];
                total = total + 1;
                cout << "Item added successfully to inventory" << endl;
            }
        }
        else if (choice == 2)
         {
            if (total == 0)
             {
                cout << "Inventory is empty! No items to show." << endl;
            } else
             {
                cout << "\n--- CURRENT INVENTORY LIST " << endl;
                for (int i = 0; i < total; i++) 
                {
                    cout << "ID: " << ids[i] 
                         << " | Name: " << items[i] 
                         << " | Price: $" << prices[i] 
                         << " | Stock: " << stocks[i] << endl;
                }
            }
        }
        else if (choice == 3)
         {
            if (total == 0)
             {
                cout << "Nothing to search. Inventory empty!" << endl;
            } 
            else
             {
                int searchId, found = 0;
                cout << "Enter Item ID to search: ";
                cin >> searchId;
                for (int i = 0; i < total; i++) {
                    if (ids[i] == searchId) {
                        cout << "Item Found Details:" << endl;
                        cout << "Name: " << items[i] << endl;
                        cout << "Price: $" << prices[i] << endl;
                        cout << "Stock Left: " << stocks[i] << endl;
                        found = 1;
                        break;
                    }
                }
                if (found == 0)
                 {
                    cout << "not exist!" << endl;
                }
            }
        }
        else if (choice == 4) {
            if (total == 0) {
                cout << "No items available to update" << endl;
            } else {
                int updateId, found = 0;
                cout << "Enter Item ID to  for stock: ";
                cin >> updateId;
                for (int i = 0; i < total; i++)
                 {
                    if (ids[i] == updateId) {
                        cout << "Current stock for " << items[i] << " is " << stocks[i] << endl;
                        cout << "Enter new stock quantity: ";
                        cin >> stocks[i];
                        cout << "Stock updated successfully!" << endl;
                        found = 1;
                        break;
                    }
                }
                if (found == 0)
                 {
                    cout << "Item ID not found!" << endl;
                }
            }
        }
        else
         {
            cout << " Please choose 1 to 5." << endl;
        }
    }

    
}

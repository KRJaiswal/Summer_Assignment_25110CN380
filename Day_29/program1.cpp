#include <iostream>

using namespace std;

int main() {
    int choice;
    double num1, num2, ans;

    while (1) {
        cout << "\n MY CALCULATOR " << endl;
        cout << "1. Plus" << endl;
        cout << "2. Minus" << endl;
        cout << "3. Multiply" << endl;
        cout << "4. Divide" << endl;
        cout << "5. Stop" << endl;
        cout << "Enter your choice number: ";
        cin >> choice;

        if (choice == 5)
         {
            cout << "bye bye see you later!" << endl;
            break;
        }

        if (choice < 1 || choice > 5) 
        {
            cout << "wrong input choice!! try again" << endl;
            continue;
        }

        cout << "Enter first number ";
        cin >> num1;
        cout << "Enter second number ";
        cin >> num2;

        if (choice == 1) {
            ans = num1 + num2;
            cout << "Result is: " << ans << endl;
        }
        else if (choice == 2) {
            ans = num1 - num2;
            cout << "Result is: " << ans << endl;
        }
        else if (choice == 3) {
            ans = num1 * num2;
            cout << "Result is: " << ans << endl;
        }
        else if (choice == 4)
         {
            if (num2 == 0)
             {
                cout << "Error! cannot divide by zero" << endl;
            } else
             {
                ans = num1 / num2;
                cout << "Result is: " << ans << endl;
            }
        }
    }

    return 0;
}

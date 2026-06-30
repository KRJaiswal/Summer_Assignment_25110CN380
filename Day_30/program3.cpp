#include <iostream>
#include <vector>

using namespace std;

struct Employee {
    int id;
    string name;
    string role;
    double salary;
};

void addEmployee(vector<Employee>& employees) {
    Employee emp;
    cout << "Enter ID: ";
    cin >> emp.id;
    cout << "Enter Name: ";
    cin >> emp.name;
    cout << "Enter Role ";
    cin >> emp.role;
    cout << "Enter Salary ";
    cin >> emp.salary;
    employees.push_back(emp);
}

void listEmployees(const vector<Employee>& employees) 

{
    for (size_t i = 0; i < employees.size(); i++) {
        cout << employees[i].id << " " 
             << employees[i].name << " " 
             << employees[i].role << " " 
             << employees[i].salary << "\n";
    }
}

void searchEmployee(const vector<Employee>& employees) 
{
    int id;
    cout << "Enter ID to search: ";
    cin >> id;
    for (size_t i = 0; i < employees.size(); i++) 
    {
        if (employees[i].id == id) 
        {
            cout << employees[i].name << " " 
                 << employees[i].role << " " 
                 << employees[i].salary << "\n";
            return;
        }
    }
    cout << "Not found\n";
}

void deleteEmployee(vector<Employee>& employees)
 {
    int id;
    cout << "Enter ID to delete: ";
    cin >> id;
    for (size_t i = 0; i < employees.size(); i++) 
    {
        if (employees[i].id == id)
         {
            employees.erase(employees.begin() + i);
            cout << "Deleted\n";
            return;
        }
    }
    cout << "Not found\n";
}

int main()

{
    vector<Employee> employees;
    int choice;
    
    while (true) 
    {
        cout << "\n1.Add 2.List 3.Search 4.Delete 5.Exit: ";
        cin >> choice;
        
        if (choice == 1) addEmployee(employees);
        else if (choice == 2)  listEmployees(employees);
        else if (choice == 3)   searchEmployee(employees);
        else if (choice == 4)   deleteEmployee(employees);
        else if (choice == 5) break;
    }

}

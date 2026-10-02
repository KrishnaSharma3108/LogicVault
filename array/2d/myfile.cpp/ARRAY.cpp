#include <iostream>
#include <string>
using namespace std;
struct Employee {
    int id;
    string name;
    float salary;
};
int main() {
    Employee employees[3];
    for (int i = 0; i < 3; i++) {
        cout << "Enter details for employee " << i + 1 << ":\n";
        cout << "ID: ";
        cin >> employees[i].id;
        cout << "Name: ";
        cin.ignore(); 
        getline(cin, employees[i].name);
        cout << "Salary: ";
        cin >> employees[i].salary;
    }
    cout << "\nEmployee Details:\n";
    for (int i = 0; i < 3; i++) {
        cout << "ID: " << employees[i].id << ", Name: " << employees[i].name
             << ", Salary: " << employees[i].salary << endl;
    }

    return 0;
}
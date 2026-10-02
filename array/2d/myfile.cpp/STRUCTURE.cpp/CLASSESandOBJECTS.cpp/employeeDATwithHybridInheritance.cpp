#include <iostream>
using namespace std;

class Employee {
public:
    int eno;
    char name[20];
    char des[20];

    void getData() {
        cout << "Enter the employee number: ";
        cin >> eno;
        cout << "Enter the employee name: ";
        cin >> name;
        cout << "Enter the designation: ";
        cin >> des;
    }
};

class Salary : public Employee {
public:
    float bp, hra, da, pf;

    void getSalaryData() {
        cout << "Enter the basic pay: ";
        cin >> bp;
        cout << "Enter the HRA: ";
        cin >> hra;
        cout << "Enter the DA: ";
        cin >> da;
        cout << "Enter the PF: ";
        cin >> pf;
    }
};

class NetSalary : public Salary {
public:
    float np;  

    void calculateNetSalary() {
        np = bp + hra + da - pf;
    }

    void display() {
        cout << eno << " \n" << name << " \n" << des << "  \n" << bp << "  \n" << hra << " \n" << da << " \n " << pf << " \n " << np;
        cout << " Yearly Net Salary: \n " << np * 12 << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;

    NetSalary ns[10];  

    for (int i = 0; i < n; i++) {
        ns[i].getData();
        ns[i].getSalaryData();
        ns[i].calculateNetSalary();
    }

    cout << "\nE_no E_name des bp hra da pf np Yearly_Net_Salary\n";
    for (int i = 0; i < n; i++) {
        ns[i].display();
    }

    return 0;
}

#include <iostream>
using namespace std;

class Employee {
public:
    int eno;
    char name[20];
    char des[20];

    void data() {
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

    void data1() {
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

class NetSalary : public Employee {
public:
    float np;  // net pay
    float bp, hra, da, pf;

    void data2() {
        cout << "Enter the basic pay: ";
        cin >> bp;
        cout << "Enter the HRA: ";
        cin >> hra;
        cout << "Enter the DA: ";
        cin >> da;
        cout << "Enter the PF: ";
        cin >> pf;
    }

    void calculate() {
        np = bp + hra + da - pf;
    }

    void display() {
        cout << eno << " " << name << " " << des << " " << bp << " " << hra << " " << da << " " << pf << " " << np;
        cout << " Yearly Net Salary: " << np * 12 << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;

    Salary s[10];
    NetSalary ns[10];

    for (int i = 0; i < n; i++) {
        s[i].data();
        s[i].data1();

        ns[i].data();
        ns[i].data2();
        ns[i].calculate();
    }

    cout << "\nE_no E_name des bp hra da pf np Yearly_Net_Salary\n";
    for (int i = 0; i < n; i++) {
        ns[i].display();
    }

    return 0;
}

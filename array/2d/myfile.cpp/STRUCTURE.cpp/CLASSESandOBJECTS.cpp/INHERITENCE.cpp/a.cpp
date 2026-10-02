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

class JobDetails : public Employee {
public:
    void showJob() {
        cout << "Job Info: " << eno << " " << name << " " << des << endl;
    }
};

class Salary : public Employee {
    float bp, hra, da, pf, np;
public:
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

    void calculate() {
        np = bp + hra + da - pf;
    }

    void showSalary() {
        cout << "Salary Info: " << bp << " " << hra << " " << da << " " << pf << " " << np << endl;
    }
};

// Hybrid inheritance - inherits from both JobDetails and Salary
class Manager : public JobDetails, public Salary {
public:
    void display() {
        // Ambiguity here: eno, name, des are inherited twice via JobDetails and Salary
        // cout << eno; // ERROR: ambiguous
        JobDetails::showJob();   // Explicitly calling to avoid ambiguity
        Salary::showSalary();
    }
};

int main() {
    Manager m;

    // Input for Employee data:
    // This is ambiguous because two copies of Employee exist via JobDetails and Salary
    // m.data(); // ERROR: ambiguous

    // So use scope resolution to get data via JobDetails or Salary
    m.JobDetails::data();

    // Input salary data
    m.data1();

    // Calculate salary
    m.calculate();

    // Display all info
    m.display();

    return 0;
}

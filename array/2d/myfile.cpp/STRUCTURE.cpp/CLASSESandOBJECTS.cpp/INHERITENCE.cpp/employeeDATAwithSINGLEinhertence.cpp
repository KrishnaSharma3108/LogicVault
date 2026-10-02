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

    void display() {
        cout << eno << " " << name << " " << des << " " << bp << " " << hra << " " << da << " " << pf << " " << np << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;
    Salary s[10];

    for (int i = 0; i < n; i++) {
        s[i].data();
        s[i].data1();
        s[i].calculate();
    }

    cout << "\n\ne_no\n  e_name\n  des\n  bp\n  hra\n  da\n  pf\n  np\n\n";
    for (int i = 0; i < n; i++) {
        s[i].display();
    }

    return 0;
}

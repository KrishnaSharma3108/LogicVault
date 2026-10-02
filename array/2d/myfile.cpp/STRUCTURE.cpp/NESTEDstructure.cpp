#include <iostream>
using namespace std;
struct Address {
    string city;
    int pinCode;
};
struct Employee {
    string name;
    int id;
    float salary;
    Address address; 
};
int main() {
    Employee emp;
    emp.name = "KRISHNA SHARMA ";
    emp.id = 10001;
    emp.salary=5000000;
    emp.address.city = "AMRITSAR";
    emp.address.pinCode = 143001;
    cout << "Employee Name: " << emp.name << endl;
    cout << "Employee ID: " << emp.id << endl;
    cout << "City: " << emp.address.city << endl;
    cout << "Pin Code: " << emp.address.pinCode << endl;
    cout<<"Salary: " <<emp.salary<<endl;
    return 0;
}

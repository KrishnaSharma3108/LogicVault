#include<iostream>
using namespace std;
class Admission {
public:
    int admNo;
    Admission(int no) {
        admNo = no;
        cout << "Admission constructor called\n";
    }
};

class Address {
public:
    string address;
    Address(string addr) {
        address = addr;
        cout << "Address constructor called\n";
    }
};

class Student : public Admission, public Address {
public:
    string name;
    Student(int no, string n, string addr) : Admission(no), Address(addr) {
        name = n;
        cout << "Student constructor called\n";
    }
    void display() {
        cout << "Adm No: " << admNo << ", Name: " << name << ", Address: " << address << endl;
    }
};

int main() {
    Student stu(102, "Krishna", "Amritsar");
    stu.display();
    return 0;
}

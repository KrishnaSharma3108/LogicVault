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

class PersonalDetails : public Admission {
public:
    string name;
    PersonalDetails(int no, string n) : Admission(no) {
        name = n;
        cout << "PersonalDetails constructor called\n";
    }
};

class AddressDetails : public PersonalDetails {
public:
    string address;
    AddressDetails(int no, string n, string addr) : PersonalDetails(no, n) {
        address = addr;
        cout << "AddressDetails constructor called\n";
    }
    void display() {
        cout << "Adm No: " << admNo << ", Name: " << name << ", Address: " << address << endl;
    }
};

int main() {
    AddressDetails student(103, "KRISHNA", "AMRITSAR");
    student.display();
    return 0;
}

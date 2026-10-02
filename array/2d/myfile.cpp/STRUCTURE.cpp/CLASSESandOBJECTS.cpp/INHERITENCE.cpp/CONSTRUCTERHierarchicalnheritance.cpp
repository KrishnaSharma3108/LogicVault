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
    void display() {
        cout << "Adm No: " << admNo << ", Name: " << name << endl;
    }
};

class AddressDetails : public Admission {
public:
    string address;
    AddressDetails(int no, string addr) : Admission(no) {
        address = addr;
        cout << "AddressDetails constructor called\n";
    }
    void display() {
        cout << "Adm No: " << admNo << ", Address: " << address << endl;
    }
};

int main() {
    PersonalDetails p(104, "krishna");
    AddressDetails a(104, "AMRITSAR");
    p.display();
    a.display();
    return 0;
}

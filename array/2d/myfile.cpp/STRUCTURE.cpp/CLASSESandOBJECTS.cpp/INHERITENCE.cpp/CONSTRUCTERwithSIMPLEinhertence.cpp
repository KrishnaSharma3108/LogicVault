#include <iostream>
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
        cout << "Admission No: " << admNo << ", Name: " << name << endl;
    }
};

int main() {
    PersonalDetails student(101, "KRISHNA");
    student.display();
    return 0;
}

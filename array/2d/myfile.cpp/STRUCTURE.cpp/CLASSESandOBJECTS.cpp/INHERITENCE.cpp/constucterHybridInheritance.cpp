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

class Sports {
public:
    string sportsName;
    Sports(string sName) {
        sportsName = sName;
        cout << "Sports constructor called\n";
    }
};

class Student : public PersonalDetails, public Sports {
public:
    Student(int no, string n, string sName) : PersonalDetails(no, n), Sports(sName) {
        cout << "Student constructor called\n";
    }
    void display() {
        cout << "Adm No: " << admNo << ", Name: " << name << ", Sport: " << sportsName << endl;
    }
};

int main() {
    Student st(105, "Krishna", "Cricket");
    st.display();
    return 0;
}

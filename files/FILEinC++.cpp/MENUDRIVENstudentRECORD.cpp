#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student {
public:
    int roll;
    string name;
    float marks;

    void getdata() {
        cout << "Enter Name: ";
        cin>>name;
        cout << "Enter Roll: ";
        cin >> roll;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void showdata() {
        cout << "Roll: " << roll <<endl<< " Name: " << name <<endl<< " Marks: " << marks << endl;
    }
};

void writeStudent() {
    ofstream file("students.dat", ios::app | ios::binary);
    Student s;
    s.getdata();
    file.write((char*)&s, sizeof(s));
    file.close();
    cout << "Student record added successfully!" << endl;
}

void readStudents() {
    ifstream file("students.dat", ios::binary);
    Student s;
    cout << "Student Records:" << endl;
    while (file.read((char*)&s, sizeof(s))) {
        s.showdata();
    }
    file.close();
}

int main() {
    int choice;
    do {
        cout << "\n--- Menu ---" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display Students" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                writeStudent();
                break;
            case 2:
                readStudents();
                break;
            case 3:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 3);

    return 0;
}
-
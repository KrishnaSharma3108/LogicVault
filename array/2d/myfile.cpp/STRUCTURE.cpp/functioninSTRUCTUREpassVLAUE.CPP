#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
};

void displayStudent(Student s) {
    cout << "Name: " << s.name << ", Age: " << s.age << endl;
}

int main() {
    Student student1 = {"KRISHNA", 18};
    displayStudent(student1); // Passing by value
    return 0;
}


#include <iostream>
using namespace std;
struct Student {
    string name;
    int age;
    float marks;
};
int main() {
    Student* ptr = new Student;
    ptr->name = "KRISHNA_SHARMA";
    ptr->age = 19;
    ptr->marks = 99.9;
    cout << "Name: " << ptr->name << endl;
    cout << "Age: " << ptr->age << endl;
    cout << "Marks: " << ptr->marks << endl;
    delete ptr;
    return 0;
}

#include <iostream>
using namespace std;
struct Student {
    string name;
    int age;
    float marks;
};
int main() {
    Student s1 = {"KRISHNA_SHARMA", 19, 95.5};
    Student* ptr = &s1;
    cout << "Name: " << ptr->name << endl;
    cout << "Age: " << ptr->age << endl;
    cout << "Marks: " << ptr->marks << endl;
    return 0;
}

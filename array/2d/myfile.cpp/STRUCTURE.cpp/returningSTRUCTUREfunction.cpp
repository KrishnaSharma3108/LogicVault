#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
};

Student createStudent(string name, int age) {
    Student s;
    s.name = name;
    s.age = age;
    return s; 
}

int main() {
    Student student1 = createStudent("KRISHNA ", 18);
    cout << "Name: " << student1.name << ", Age: " << student1.age << endl;
    return 0;
}

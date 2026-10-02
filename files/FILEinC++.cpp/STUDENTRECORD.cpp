#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    ofstream out("students.dat", ios::binary);
    Student s1 = {1, "KRISHNA", 95.5f};
    Student s2 = {2, "KRISH", 88.0f};
    out.write((char*)&s1, sizeof(s1));
    out.write((char*)&s2, sizeof(s2));
    out.close();

    ifstream in("students.dat", ios::binary);
    Student temp;
    cout << "Roll\tName\tMarks\n";
    while (in.read((char*)&temp, sizeof(temp))) {
        cout << temp.roll << "\t" << temp.name << "\t" << temp.marks << "\n";
    }
    in.close();
    return 0;
}

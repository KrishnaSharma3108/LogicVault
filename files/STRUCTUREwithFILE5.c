#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct data {
    int rollno;
    string name;
    string subject_name[4];
    float marks[5];
};

int main() {
    data d, d_read;
    ofstream sd_out("studentdata.txt");
    if (!sd_out) {
        cout << "Error opening file for write\n";
        return 1;
    }

    cout << "Enter student rollno:\n";
    cin >> d.rollno;
    cin.ignore(); // To clear newline from input buffer

    cout << "Enter name of the student:\n";
    getline(cin, d.name);

    for (int i = 0; i < 2; i++) {
        cout << "Enter name of subject " << i + 1 << ":\n";
        getline(cin, d.subject_name[i]);

        cout << "Enter marks of student:\n";
        cin >> d.marks[i];
        cin.ignore(); // Clear newline for next getline
    }

    // Writing to file
    sd_out << d.rollno << '\n' << d.name << '\n';
    for (int i = 0; i < 2; i++) {
        sd_out << d.subject_name[i] << '\n' << d.marks[i] << '\n';
    }

    sd_out.close();

    // Reading from file
    ifstream sd_in("studentdata.txt");
    if (!sd_in) {
        cout << "Error opening file for reading\n";
        return 1;
    }

    getline(sd_in, d_read.rollno);
    sd_in >> d_read.rollno;
    sd_in.ignore();

    getline(sd_in, d_read.name);

    for (int i = 0; i < 2; i++) {
        getline(sd_in, d_read.subject_name[i]);
        sd_in >> d_read.marks[i];
        sd_in.ignore();
    }

    sd_in.close();

    // Display data read from file
    cout << "\nData from file:\n";
    cout << "Roll no: " << d_read.rollno << '\n';
    cout << "Name: " << d_read.name << '\n';
    for (int i = 0; i < 2; i++) {
        cout << "Subject " << i + 1 << ": " << d_read.subject_name[i] << '\n';
        cout << "Marks: " << d_read.marks[i] << '\n';
    }

    return 0;
}

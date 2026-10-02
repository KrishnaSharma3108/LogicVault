#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream myfile("ABOUT_ME", ios::app);
    if (!myfile) {
        cout << "Failed to open the file for appending." << endl;
        return 1;
    }
    myfile << "I AM A CODER\n";
    myfile << "MY AIM IS TO BECOME TRILLIONER\n";
    myfile.close();
    cout << "Data appended successfully." << endl;
    return 0;
}

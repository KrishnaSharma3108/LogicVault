#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream myfile("ABOUT_ME");
    if (!myfile) {
        cout << "Error: Unable to open the file." << endl;
        return 1;
    }
    string line;
    while (getline(myfile, line)) {
        cout << line << endl;
    }
    myfile.close();
    return 0;
}

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string filename = "ABOUT_ME";
    string wordToFind = "AND";
    ifstream file(filename);
    string word;
    int count = 0;
    while (file >> word) {
        if (word == wordToFind) count++;
    }
    file.close();
    cout << "The word \"" << wordToFind << "\" appeared " << count << " times." << endl;
    return 0;
}

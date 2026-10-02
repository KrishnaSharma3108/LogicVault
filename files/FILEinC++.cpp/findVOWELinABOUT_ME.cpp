#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream myfile("ABOUT_ME");
    if (!myfile) {
        cout << "File not found." << endl;
        return 1;
    }
    int vowels = 0;
    char ch;
    while (myfile.get(ch)) {
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            vowels++;
    }
    myfile.close();
    cout << "Number of vowels: " << vowels << endl;
    return 0;
}

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("ABOUT_ME");
    ofstream upper("uppercase.txt");
    ofstream lower("lowercase.txt");
    ofstream other("other.txt");

    char ch;
    while (fin.get(ch)) {
        if (isupper(ch))
            upper << ch;
        else if (islower(ch))
            lower << ch;
        else
            other << ch;
    }

    fin.close();
    upper.close();
    lower.close();
    other.close();

    cout << "Characters separated into respective files." << endl;
    return 0;
}

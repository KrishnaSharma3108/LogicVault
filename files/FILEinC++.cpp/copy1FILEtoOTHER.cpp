#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("ABOUT_ME");
    ofstream fout("COPYABOUTME");
    if (!fin || !fout) {
        cout << "Error opening file." << endl;
        return 1;
    }
    string line;
    while (getline(fin, line)) {
        fout << line << endl;
    }
    fin.close();
    fout.close();
    cout << "Copied successfully." << endl;
    return 0;
}

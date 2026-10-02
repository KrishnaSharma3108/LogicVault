#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream myfile("ABOUT_ME");
    if (!myfile) {
        cout << "Error: Unable to open the file." << endl;
        return 1;
    }
    myfile << "MY NAME IS KRISHNA SHARMA \n";
    myfile << "MY HOBBIES ARE LISTEN MUSIC AND DO THINGS WHICH HEPL ME IN FUTURE \n";
    myfile << "I AM 19 YEAR OLD\n";
    myfile.close();
    cout << "Data written successfully." << endl;
    return 0;
}

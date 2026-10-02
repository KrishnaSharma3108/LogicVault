#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    // The secret target PIN we are trying to find
    const int targetPIN = 4321; 
    bool found = false;
    cout << "Starting iterative brute force search...\n";
    // Loop through every possible 4-digit combination
    for (int i = 0; i <= 9999; ++i) {
        if (i == targetPIN) 
        {
            cout << "Success! The PIN is: " << std::setw(4) << std::setfill('0') << i << "\n";
            found = true;
            break; // Stop immediately once found
        }
    }
    if (!found) 
    {
        cout << "PIN not found in the search space.\n";
    }
    return 0;
}
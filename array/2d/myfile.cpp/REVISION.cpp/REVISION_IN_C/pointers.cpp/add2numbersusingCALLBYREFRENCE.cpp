#include <iostream>
using namespace std;

// Function prototype for adding two numbers using call by reference
long addTwoNumbers(const long &n1, const long &n2);

int main() {
    long fno, sno, sum;

    cout << "\n\n Pointer : Add two numbers using call by reference:\n";
    cout << "-------------------------------------------------------\n";

    cout << " Input the first number : ";
    cin >> fno; // Read the first number from the user

    cout << " Input the second number : ";
    cin >> sno; // Read the second number from the user

    sum = addTwoNumbers(fno, sno); // Call the function with references

    cout << " The sum of " << fno << " and " << sno << " is " << sum << "\n\n";

    return 0;
}

// Function to add two numbers using call by reference
long addTwoNumbers(const long &n1, const long &n2) {
    return n1 + n2; // Return the sum directly
}

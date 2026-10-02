#include <iostream>
using namespace std;

int main() {
    int fno, sno, *ptr, *qtr, sum;  // Declare integer variables and pointers

    cout << "\n\n Pointer : Add two numbers :\n";
    cout << "--------------------------------\n";

    cout << " Input the first number : ";
    cin >> fno;  // Read the first number from the user

    cout << " Input the second number : ";
    cin >> sno;  // Read the second number from the user

    ptr = &fno;  // Assign the address of fno to the pointer ptr
    qtr = &sno;  // Assign the address of sno to the pointer qtr

    sum = *ptr + *qtr;  // Dereference ptr and qtr to calculate their sum

    cout << " The sum of the entered numbers is : " << sum << "\n\n";

    return 0;
}

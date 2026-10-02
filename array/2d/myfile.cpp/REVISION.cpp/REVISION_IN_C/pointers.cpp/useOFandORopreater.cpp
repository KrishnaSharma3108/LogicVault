#include <iostream>
using namespace std;

int main() {
    int m = 300;        // Declare and initialize an integer variable m
    float fx = 300.60;  // Declare and initialize a float variable fx
    char cht = 'z';     // Declare and initialize a char variable cht

    cout << "\n\n Pointer : Demonstrate the use of & and * operator :\n";
    cout << "--------------------------------------------------------\n";

    int *pt1;    // Declare an integer pointer pt1
    float *pt2;  // Declare a float pointer pt2
    char *pt3;   // Declare a char pointer pt3

    pt1 = &m;    // Assign the address of m to pointer pt1
    pt2 = &fx;   // Assign the address of fx to pointer pt2
    pt3 = &cht;  // Assign the address of cht to pointer pt3

    cout << " m = " << m << endl;        // Print the value of m
    cout << " fx = " << fx << endl;      // Print the value of fx
    cout << " cht = " << cht << endl;
return 0;
}
#include <iostream>
using namespace std;

int main() {
    int* ab; // Declare a pointer variable ab
    int m;   // Declare an integer variable m

    m = 29; // Assign the value 29 to the variable m

    cout << "\n\n Pointer : How to handle the pointers in the program :\n";
    cout << "------------------------------------------------------------\n";
    cout << " Here in the declaration ab = int pointer, int m = 29\n\n";

    cout << " Address of m : " << &m << endl;   // Print the address of variable m
    cout << " Value of m : " << m << "\n\n";    // Print the value of variable m

    ab = &m; // Assign the address of m to the pointer variable ab
    cout << " Now ab is assigned with the address of m.\n";
    cout << " Address of pointer ab : " << ab << endl;       // Print the address stored in pointer ab
    cout << " Content of pointer ab : " << *ab << "\n\n";    // Print the value pointed to by ab

    m = 34; // Assign the value 34 to the variable m
    cout << " The value of m assigned to 34 now.\n";
    cout << " Address of pointer ab : " << ab << endl;       // Print the address stored in pointer ab
    cout << " Content of pointer ab : " << *ab << "\n\n";    // Print the value pointed to by ab

    *ab = 7; // Assign the value 7 to the variable pointed by ab
    cout << " The pointer variable ab is assigned the value 7 now.\n";
    cout << " Address of m : " << &m << endl;                // Print the address of variable m
    cout << " Value of m : " << m << "\n\n";                 // Print the value of variable m

    return 0;
}

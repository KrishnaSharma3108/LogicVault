#include <iostream>
using namespace std;

// Global variable
int x = 10;

class Example {
public:
    static int x; // Static member variable
    void display() {
        int x = 100; // Local variable
        cout << "Local x: " << x << endl;           // Access local variable
        cout << "Class x: " << Example::x << endl;  // Access class variable
        cout << "Global x: " << ::x << endl;        // Access global variable
    }
};

// Define the static member variable
int Example::x =90920;

int main() {
    Example obj;
    obj.display();
    return 0;
}

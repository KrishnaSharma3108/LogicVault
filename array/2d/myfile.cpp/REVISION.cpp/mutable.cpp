#include <iostream>
using namespace std;

class A {
public:
    int x;

    // Defining mutable variable y
    // now this can be modified
    mutable int y;

    A(): x(4), y(10) {}
};

int main() {
  
    // a is created as constant
    const A a;

    // Trying to change the value
    a.y = 200;
    cout << a.y;

    // Uncommenting below lines
    // will throw error
    /* a.x = 8;
    cout << a.x; */
  
    return 0;
}
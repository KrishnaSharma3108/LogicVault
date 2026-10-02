#include <iostream>
using namespace std;

int main() {
    int x = 42;
    void* ptr = &x; 
    cout << "Value  by void pointer: " << *(static_cast<int*>(ptr)) << endl;
    return 0;
}
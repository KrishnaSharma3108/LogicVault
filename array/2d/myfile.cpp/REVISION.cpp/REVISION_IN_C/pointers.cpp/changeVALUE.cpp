#include <iostream>
using namespace std;

int main() {
    int x = 42;
    int *ptr = &x; 
    cout<<sizeof(x)<<" "<<sizeof(*ptr)<<endl;
    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Pointer value (address of x): " << ptr << endl;
    cout << "Value pointed by ptr: " << *ptr << endl;

    *ptr = 100; 
    cout << "New value of x: " << x << endl;

    return 0;
}

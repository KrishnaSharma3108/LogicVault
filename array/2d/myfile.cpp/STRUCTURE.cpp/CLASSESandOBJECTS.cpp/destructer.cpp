#include <iostream>
using namespace std;

class MyClass {
private:

    // Pointer to dynamically 
    // allocated memory
    int* data;

public:
    MyClass(int value) {
        data = new int;
        *data = value;
        cout << *data << endl;
    }

    // User-defined destructor: Free 
    // the dynamically allocated memory
    ~MyClass() {
        
        // Deallocate the dynamically 
        // allocated memory
        delete data;  
        cout << "Destructor: Memory deallocated";
    }
};

int main() {
    int a;
    cout<<"enter value";
    cin>>a;
    MyClass obj1(a);
    return 0;
}
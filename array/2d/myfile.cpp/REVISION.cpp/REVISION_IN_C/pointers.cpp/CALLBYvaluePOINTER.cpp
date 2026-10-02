#include <iostream>
using namespace std;
void modifyPointer(int* ptr) {
    *ptr = 20;
    ptr = nullptr;
}
int main() {
    int num = 10;
    int* ptr = &num;
    cout << "Before function call: num = " << num << ", ptr = " << ptr << endl;
    modifyPointer(ptr);
    cout << "After function call: num = " << num << ", ptr = " << ptr << endl;
    return 0;
}

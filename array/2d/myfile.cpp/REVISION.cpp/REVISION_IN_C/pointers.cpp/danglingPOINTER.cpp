#include <iostream>
using namespace std;
int x;
int* getPointer() {
    extern int x;
    x=10;
    return &x; 
}
int main() {
    int* ptr = getPointer();  
    cout<<*ptr;
    return 0;
}
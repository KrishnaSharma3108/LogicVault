#include <iostream>
#include <string>
using namespace std;
int main() {
    string str = "KRISHNA_SHARMA!";
    string* ptr = &str; 
    cout << "String value: " << str << endl;
    cout << "Pointer value: " << *ptr << endl; 
    cout << "Memory address: " << ptr << endl;
    *ptr = "JAI_SIYA_RAM";
    cout << "Modified string: " << str << endl;
    return 0;
}

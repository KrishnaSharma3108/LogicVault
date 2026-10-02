#include <iostream>
#include <memory>
using namespace std;
int main() {
    int *nptr;
    nptr = new int(5);
    cout << *nptr << endl;
    cout << nptr;
    return 0;
}
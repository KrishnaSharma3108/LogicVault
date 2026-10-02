#include <iostream>
using namespace std;
int func() {
    static int count = 990;
    count++;
    return count;
}
int main() {
    cout << func() <<endl;
    cout << func();   
    return 0;
}
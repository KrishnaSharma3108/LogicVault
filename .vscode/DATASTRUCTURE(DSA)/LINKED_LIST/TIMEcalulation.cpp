#include <iostream>
#include <ctime>
using namespace std;
int main() {
    clock_t start = clock();

    // Simulate work
    for (volatile int i = 0; i < 100000000; ++i);

    clock_t end = clock();
    double cpu_time = double(end - start) / CLOCKS_PER_SEC;

    cout << "CPU time: " << cpu_time << " seconds" <<endl;
    return 0;
}
 // clock_t start = clock();
    //list.searchNumber(num);
    //clock_t end = clock();
    //ouble cpu_time = double(end - start) / CLOCKS_PER_SEC;
    //cout << "CPU Time = " << cpu_time << " seconds" << endl;
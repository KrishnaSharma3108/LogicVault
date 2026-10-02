#include <iostream>
#include <cstdlib> 
using namespace std;
int main() {
    int* arr = (int*)malloc(5 * sizeof(int));

    if (arr == NULL) {
        cout<< "Memory allocation failed!" <<endl;
        return 1;
    }
    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;
        cout << arr[i] << " ";
    }
    cout <<endl;
    free(arr);
    return 0;
}

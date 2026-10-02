#include <bits/stdc++.h>
using namespace std;

// Pass by pointer
void foo(vector<int> *ptr) {

    // Modify the original vector
    ptr->push_back(8);
  	for (int i = 0; i < ptr->size(); i++) {
      cout << ptr->at(i) << " ";
    }
  	cout << endl;
}

int main() {
    vector<int> v = {1, 3, 7, 9};

    // Passing address of the vector to foo()
    foo(&v);

    for (auto i : v)
        cout << i << " ";
    return 0;
}
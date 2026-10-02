#include <bits/stdc++.h>
using namespace std;

// Pass by reference
void foo(vector<int> &vec) {

    // Modifying the vector
    vec.push_back(8);
    for (auto i : vec)
        cout << i << " ";
    cout << endl;
}

int main() {

    vector<int> v = {1, 3, 7, 9};

    // Pass the vector to foo()
    foo(v);

    for (auto i : v)
        cout << i << " ";
    return 0;
}
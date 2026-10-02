#include <bits/stdc++.h>
using namespace std;

// Pass by value
void foo(vector<int> vec) {
  
  	// Modifying vector inside function
    vec.push_back(8);
  	for (int i: vec) {
      	cout << i << " ";
    }
  	cout << endl;
}

int main() {
    vector<int> v = {1, 3, 7, 9};

    // Passing the vector to foo()
    foo(v);

    for (int i : v)
        cout << i << " ";
    return 0;
}
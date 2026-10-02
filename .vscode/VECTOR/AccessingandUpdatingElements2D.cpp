#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}};

    // Access 3rd element in 2nd row
    cout << "3rd element in 2nd row: " << v[1][2] << endl;

    // Access 2nd element in 1st row
    cout << "2nd element in 1st row: " << v[0][1] << endl;

    // Updating the 2nd element in 1st row
    v[0][1] = 9;
    cout << "2nd element in 1st row after updating: " << v[0][1] << endl;

    return 0;
}
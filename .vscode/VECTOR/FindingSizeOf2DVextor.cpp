#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Creating a 2D vector
    vector<vector<int>> vec = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Finding the number of rows (size of the outer vector)
    int rows = vec.size();
    cout << "Number of rows: " << rows << endl;

    // Finding the number of columns (size of any inner vector first row)
    int cols = vec[0].size();
    cout << "Number of columns: " << cols << endl;

    return 0;
}
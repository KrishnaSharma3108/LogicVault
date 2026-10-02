#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}};

    // Loop through rows
    for (int i = 0; i < v.size(); i++)
    {

        // Loop through columns
        for (int j = 0; j < v[i].size(); j++)
            cout << v[i][j] << " ";
            
        cout << endl;
    }

    return 0;
}
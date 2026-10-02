#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}};

    // Delete the second row
    v.erase(v.begin() + 1);

    // Delete second element in first row
    v[0].erase(v[0].begin() + 1);

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
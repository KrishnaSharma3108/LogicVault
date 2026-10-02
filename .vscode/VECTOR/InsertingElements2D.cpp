#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}};

    // Insert a new row at the end
    v.push_back({7, 8, 9});

    // Insert value in 2nd row at 2nd position
    v[1].insert(v[1].begin() + 1, 10);

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

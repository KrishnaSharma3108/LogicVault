#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Directly initializing with values
    vector<vector<int>> vec = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < vec.size(); i++)
    {
        cout<<i<<"->";
        for (int j = 0; j < vec[i].size(); j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
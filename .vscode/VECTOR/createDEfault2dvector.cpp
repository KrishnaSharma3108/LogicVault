#include <iostream>
#include <vector>
using namespace std;

int main()
{
    
    // empty 2D vector
    vector<vector<int>> vec; 

    // Adding rows dynamically
    vec.push_back({1, 2, 3});
    vec.push_back({4, 5, 6});

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
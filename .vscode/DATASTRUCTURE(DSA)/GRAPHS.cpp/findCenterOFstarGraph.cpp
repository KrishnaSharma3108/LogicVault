#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        // Take the first two edges
        int u1 = edges[0][0], v1 = edges[0][1];
        int u2 = edges[1][0], v2 = edges[1][1];
        // The common node between the first two edges is the center
        if (u1 == u2 || u1 == v2)
        {
            return u1;
        }
        return v1;
    }
};
int main() {
    int n;
    cout << "Enter number of edges: ";
    cin >> n;
    vector<vector<int>> edges(n, vector<int>(2));
    cout << "Enter the edges:\n";
    for (int i = 0; i < n; i++) {
        cin >> edges[i][0] >> edges[i][1];
    }
    Solution obj;
    cout << "Center of Star Graph: " << obj.findCenter(edges) << endl;
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;
class Graph
{
    int V;
    vector<pair<int, int>> adj[10];
public:
    Graph(int vertices)
    {
        V = vertices;
    }
    void addEdge(int u, int v, int weight)
    {
        adj[u].push_back({v, weight});
        // adj[v].push_back({u, weight}); 
    }
    void display()
    {
        for (int i = 0; i < V; i++)
        {
            cout << i << " -> ";
            for (auto x : adj[i])
            {
                cout << "(" << x.first << ", " << x.second << ") ";
            }
            cout << endl;
        }
    }
};
int main()
{
    Graph g(4);
    g.addEdge(0, 1, 10);
    g.addEdge(0, 2, 5);
    g.addEdge(1, 2, 3);
    g.addEdge(2, 3, 7);
    g.display();
    return 0;
}
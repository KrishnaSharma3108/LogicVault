#include <iostream>
#include <vector>
using namespace std;
class Graph
{
    int V;
    vector<vector<int>> adj;
public:
    Graph(int vertices)
    {
        V = vertices;
        adj = vector<vector<int>>(V);
    }
    void addEdge(int u, int v)
    {
        adj[u].push_back(v);
        adj[v].push_back(u);   
    }
    void display()
    {
        for (int i = 0; i < V; i++)
        {
            cout << i << " --> : ";
            for (int j = 0; j < adj[i].size(); j++)
            {
                cout << adj[i][j] << "----> ";
            }
            cout << endl;
        }
    }
};
int main()
{
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);
    cout << "Adjacency List:"<<endl;
    g.display();
    return 0;
}
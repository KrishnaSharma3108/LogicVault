#include <iostream>
#include <vector>
using namespace std;
class Graph
{
    int V;
    vector<vector<int>> matrix;
public:
    Graph(int vertices)
    {
        V = vertices;
        matrix = vector<vector<int>>(V);

        for (int i = 0; i < V; i++)
        {
            matrix[i] = vector<int>(V, 0);
        }
    }
    void addEdge(int u, int v)
    {
        matrix[u][v] = 1;
        matrix[v][u] = 1;    
    }
    void display()
    {
        cout << "Adjacency Matrix: "<<endl;
        for (int i = 0; i < V; i++)
        {
            for (int j = 0; j < V; j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
    int V, E;
    cout << "Enter number of vertices: ";
    cin >> V;
    Graph g(V);
    cout << "Enter number of edges: ";
    cin >> E;
    cout << "Enter edges (u v): "<<endl;
    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v);
    }
    g.display();
    return 0;
}
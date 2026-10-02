#include <iostream>
using namespace std;
class Graph
{
    int V;
    int graph[10][10];
public:
    Graph(int vertices)
    {
        V = vertices;
        for (int i = 0; i < V; i++)
        {
            for (int j = 0; j < V; j++)
            {
                graph[i][j] = 0;
            }
        }
    }
    void addEdge(int u, int v, int weight)
    {
        graph[u][v] = weight;      
        // graph[v][u] = weight;   // Uncomment for undirected graph
    }
    void display()
    {
        cout << "\nAdjacency Matrix: "<<endl;
        for (int i = 0; i < V; i++)
        {
            for (int j = 0; j < V; j++)
            {
                cout << graph[i][j] << " ";
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
    cout << "Enter Source Destination Weight: "<<endl;
    for (int i = 0; i < E; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        g.addEdge(u, v, w);
    }
    g.display();
    return 0;
}
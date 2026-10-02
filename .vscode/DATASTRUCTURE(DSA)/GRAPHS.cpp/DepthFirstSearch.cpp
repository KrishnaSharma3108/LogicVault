#include <iostream>
#include <vector>
#include <stack>
using namespace std;
class Graph
{
    private:
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
    void DFS(int start)
    {
        vector<bool> visit(V, false);
        stack<int> s;
        s.push(start);
        while (!s.empty())
        {
            int current = s.top();
            s.pop();
            if (visit[current] == false)
            {
                visit[current] = true;
                cout << current << " ";
                for (int i = adj[current].size() - 1; i >= 0; i--)
                {
                    int next = adj[current][i];
                    if (visit[next] == false)
                    {
                        s.push(next);
                    }
                }
            }
        }
    }
};
int main()
{
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    cout << "DFS Traversal: ";
    g.DFS(0);
    return 0;
}

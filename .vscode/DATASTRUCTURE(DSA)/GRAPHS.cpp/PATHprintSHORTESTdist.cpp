#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include <algorithm>
using namespace std;
class Graph
{
    int V;
    vector<pair<int, int>> adj[10];
    void allPaths(int u, int dest, vector<bool> &visited,vector<int> &path, int sum)
    {
        visited[u] = true;
        path.push_back(u);
        if (u == dest)
        {
            for (int i = 0; i < path.size(); i++)
            {
                cout << path[i];
                if (i != path.size() - 1)
                    cout << " -> ";
            }
            cout << " = " << sum << endl;
        }
        else
        {
            for (auto x : adj[u])
            {
                if (!visited[x.first])
                {
                    allPaths(x.first, dest, visited, path, sum + x.second);
                }
            }
        }
        path.pop_back();
        visited[u] = false;
    }
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
    void printAllPaths(int src, int dest)
    {
        vector<bool> visited(V, false);
        vector<int> path;
        cout << "\nAll Possible Paths: "<<endl;
        allPaths(src, dest, visited, path, 0);
    }
    void shortestPath(int source, int destination)
    {
        vector<int> dist(V, INT_MAX);
        vector<int> parent(V, -1);
        priority_queue<pair<int, int>,
                       vector<pair<int, int>>,
                       greater<pair<int, int>>> pq;
        dist[source] = 0;
        pq.push({0, source});
        while (!pq.empty())
        {
            int u = pq.top().second;
            pq.pop();
            for (auto x : adj[u])
            {
                int v = x.first;
                int wt = x.second;
                if (dist[u] != INT_MAX && dist[u] + wt < dist[v])
                {
                    dist[v] = dist[u] + wt;
                    parent[v] = u;
                    pq.push({dist[v], v});
                }
            }
        }
        if (dist[destination] == INT_MAX)
        {
            cout << "\nNo Path Exists!" << endl;
            return;
        }
        cout << "\nShortest Distance = " << dist[destination] << endl;
        vector<int> path;
        for (int v = destination; v != -1; v = parent[v])
            path.push_back(v);
        reverse(path.begin(), path.end());
        cout << "Shortest Path = ";
        for (int i = 0; i < path.size(); i++)
        {
            cout << path[i];
            if (i != path.size() - 1)
                cout << " -> ";
        }
        cout << endl;
    }
};
int main()
{
    Graph g(4);
    g.addEdge(0, 1, 10);
    g.addEdge(0, 2, 5);
    g.addEdge(1, 2, 3);
    g.addEdge(2, 3, 7);
    cout << "Graph Representation: "<<endl;
    g.display();
    int source, destination;
    cout << "Enter Source Vertex: ";
    cin >> source;
    cout << "Enter Destination Vertex: ";
    cin >> destination;
    g.printAllPaths(source, destination);
    g.shortestPath(source, destination);
    return 0;
}




/*#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include <algorithm>
using namespace std;
class Graph
{
    int V;
    vector<pair<int, int>> adj[10];
    void allPaths(int u, int dest, vector<bool> &visited,
                  vector<int> &path, int sum)
    {
        visited[u] = true;
        path.push_back(u);
        if (u == dest)
        {
            for (int i = 0; i < path.size(); i++)
            {
                cout << path[i];
                if (i != path.size() - 1)
                    cout << " -> ";
            }
            cout << " = " << sum << endl;
        }
        else
        {
            for (auto x : adj[u])
            {
                if (!visited[x.first])
                {
                    allPaths(x.first, dest, visited, path,sum + x.second);
                }
            }
        }
        path.pop_back();
        visited[u] = false;
    }
public:
    Graph(int vertices)
    {
        V = vertices;
    }
    void addEdge(int u, int v, int weight)
    {
        adj[u].push_back({v, weight});
        // Uncomment for undirected graph
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
    void printAllPaths(int src, int dest)
    {
        vector<bool> visited(V, false);
        vector<int> path;
        cout << "\nAll Possible Paths:\n";
        allPaths(src, dest, visited, path, 0);
    }
    void shortestPath(int source, int destination)
    {
        vector<int> dist(V, INT_MAX);
        vector<int> parent(V, -1);
        priority_queue<pair<int, int>vector<pair<int, int>>,greater<pair<int, int>>> pq;
        dist[source] = 0;
        pq.push({0, source});
        while (!pq.empty())
        {
            int u = pq.top().second;
            pq.pop();
            for (auto x : adj[u])
            {
                int v = x.first;
                int wt = x.second;
                if (dist[u] != INT_MAX && dist[u] + wt < dist[v])
                {
                    dist[v] = dist[u] + wt;
                    parent[v] = u;
                    pq.push({dist[v], v});
                }
            }
        }
        if (dist[destination] == INT_MAX)
        {
            cout << "\nNo Path Exists!" << endl;
            return;
        }
        cout << "\nShortest Distance = " << dist[destination] << endl;
        vector<int> path;
        for (int v = destination; v != -1; v = parent[v])
            path.push_back(v);
        reverse(path.begin(), path.end());
        cout << "Shortest Path = ";
        for (int i = 0; i < path.size(); i++)
        {
            cout << path[i];
            if (i != path.size() - 1)
                cout << " -> ";
        }
        cout << endl;
    }
};
int main()
{
    Graph g(4);
    g.addEdge(0, 1, 10);
    g.addEdge(0, 2, 5);
    g.addEdge(1, 2, 3);
    g.addEdge(2, 3, 7);
    cout << "Graph Representation:\n";
    g.display();
    int source, destination;
    cout << "Enter Source Vertex: ";
    cin >> source;
    cout << "Enter Destination Vertex: ";
    cin >> destination;
    g.printAllPaths(source, destination);
    g.shortestPath(source, destination);
    return 0;
}*/

#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main()
{
    int vertices, edges;
    cout << "Enter number of vertices: ";
    cin >> vertices;
    vector<int> graph[vertices];
    bool visited[vertices] = {false};
    cout << "Enter number of edges: ";
    cin >> edges;
    cout << "Enter the edges:\n";
    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);   
    }
    cout<<"Data:"<<endl;
    for (int i = 0; i < vertices; i++)
    {
        cout<<i<<"-> ";
        for(int j=0;j<graph[i].size();j++)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
    
    int start;
    cout << "Enter starting vertex: ";
    cin >> start;
    queue<int> q;
    visited[start] = true;
    q.push(start);
    cout << "BFS Traversal: ";
    while (!q.empty())
    {
        int current = q.front();
        q.pop();
        cout << current << " ";
        for (int i = 0; i < graph[current].size(); i++)
        {
            int neighbour = graph[current][i];
            if (visited[neighbour] == false)
            {
                visited[neighbour] = true;
                q.push(neighbour);
            }
        }
    }
    return 0;
}



/*
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
    int vertices, edges;
    cout << "Enter number of vertices: ";
    cin >> vertices;

    vector<int> graph[vertices];
    bool visited[vertices] = {false};

    cout << "Enter number of edges: ";
    cin >> edges;

    cout << "Enter the edges:\n";
    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;

        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    // Sort adjacency list in descending order
    for (int i = 0; i < vertices; i++)
    {
        sort(graph[i].begin(), graph[i].end(), greater<int>());
    }

    cout << "\nAdjacency List:\n";
    for (int i = 0; i < vertices; i++)
    {
        cout << i << " -> ";
        for (int j = 0; j < graph[i].size(); j++)
        {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }

    int start;
    cout << "\nEnter starting vertex: ";
    cin >> start;

    queue<int> q;
    visited[start] = true;
    q.push(start);

    cout << "BFS Traversal: ";

    while (!q.empty())
    {
        int current = q.front();
        q.pop();

        cout << current << " ";

        for (int i = 0; i < graph[current].size(); i++)
        {
            int neighbour = graph[current][i];

            if (!visited[neighbour])
            {
                visited[neighbour] = true;
                q.push(neighbour);
            }
        }
    }

    return 0;
}
*/
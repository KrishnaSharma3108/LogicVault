#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include<ctime>
using namespace std;
class Edge
{
public:
    int dest;
    int weight;
    Edge(int dest, int weight) : dest(dest), weight(weight) {}
};
void dijkstra(int source, vector<vector<Edge>> &graph, int V)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, source});
    vector<int> dist(V, INT_MAX);
    dist[source] = 0;
    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();
        for (auto &edge : graph[u])
        //loop inderx7
        {
            if (dist[edge.dest] > dist[u] + edge.weight)
            {
                dist[edge.dest] = dist[u] + edge.weight;
                pq.push({dist[edge.dest], edge.dest});
            }
        }
    }
    cout << "Shortest distances from source " << source << " are:\n";
    for (int i = 0; i < V; i++)
    {
        cout << dist[i] << " ";
    }
    cout << endl;
}
int main()
{
    //system("cls");
    clock_t start = clock();
    int V = 6;
    vector<vector<Edge>> graph(V);
    // Adding edges to the graph
    graph[0].push_back(Edge(1, 2));
    graph[0].push_back(Edge(2, 4));
    graph[1].push_back(Edge(2, 1));
    graph[1].push_back(Edge(3, 7));
    graph[2].push_back(Edge(4, 3));
    graph[3].push_back(Edge(5, 1));
    graph[4].push_back(Edge(3, 2));
    graph[4].push_back(Edge(5, 5));
    dijkstra(0, graph, V);
    clock_t end = clock();
    double cpu_time = double(end - start) / CLOCKS_PER_SEC;
    cout << "CPU time used: " << cpu_time << " seconds\n";
   // system("pause");
    return 0;
}
/*
#include <iostream>
#include <ctime> // Required header
using namespace std;
int main() {
    clock_t start = clock();

    // Code to measure
    for (volatile int i = 0; i < 100000000; ++i); 

    clock_t end = clock();

    // Convert clock ticks to seconds
    double cpu_time = double(end - start) / CLOCKS_PER_SEC;

    cout << "CPU time used: " << cpu_time << " seconds\n";
    return 0;
}*/
#include <iostream>
#include <queue>
#include<cstdint>
#include <vector>
using namespace std;
class edge
{
public:
    int vertex;
    int weight;
    edge(int weight, int vertex) : weight(weight), vertex(vertex) {}
};
vector<int> dijkstra(int src, vector<vector<edge>> adj, int v)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // for min heap alloction
    vector<int> dist(v, INT16_MAX);
    dist[src] = 0;
    pq.push({0, src});
    while (!pq.empty())
    {
        int dis = pq.top().first;
        int node = pq.top().second;
        pq.pop();
        for (auto i : adj[node])
        {
            int edgewt = i.weight;
            int adjnode = i.vertex;
            if (dis + edgewt < dist[adjnode])
            {
                dist[adjnode] = dis + edgewt;
                pq.push({dist[adjnode], adjnode});
            }
        }
    }
    return dist;
}
int main()
{
    int v = 6;
    vector<vector<edge>> adj(v);
    adj[0].push_back(edge(2, 1));
    adj[0].push_back(edge(4, 2));
    adj[1].push_back(edge(1, 2));
    adj[1].push_back(edge(7, 3));
    adj[2].push_back(edge(3, 4));
    adj[3].push_back(edge(1, 5));
    adj[4].push_back(edge(2, 3));
    adj[4].push_back(edge(5, 5));
    int src = 0;
    vector<int> result = dijkstra(src, adj, v);
    for (int i = 0; i < v; i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}
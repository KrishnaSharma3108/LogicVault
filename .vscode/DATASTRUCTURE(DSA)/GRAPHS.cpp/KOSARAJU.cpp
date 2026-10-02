#include<iostream>
#include<vector>
using namespace std;
class graph
{
    int v;
    vector<vector<int>> store;
public:
    graph(int v)
    {
        this->v = v;
        store.resize(v);
    }
    void edgeadd(int u, int w)
    {
        store[u].push_back(w);
    }
    void DFS(int V, vector<bool> &visited)
    {
        visited[V] = true;
        for(int i = 0; i < store[V].size(); i++)
        {
            int next = store[V][i];
            if(!visited[next])
            {
                DFS(next, visited);
            }
        }
    }
    graph Transpose()
    {
        graph g(v);

        for(int i = 0; i < v; i++)
        {
            for(int j = 0; j < store[i].size(); j++)
            {
                g.edgeadd(store[i][j], i);
            }
        }
        return g;
    }
    bool isStronglyConnected()
    {
        vector<bool> visited(v, false);
        DFS(0, visited);
        for(int i = 0; i < v; i++)
        {
            if(!visited[i])
            {
                return false;
            }
        }
        graph g = Transpose();
        visited.assign(v, false);
        g.DFS(0, visited);
        for(int i = 0; i < v; i++)
        {
            if(!visited[i])
            {
                return false;
            }
        }
        return true;
    }
};
int main()
{
    // Graph 1 (Strongly Connected)
    graph g1(5);
    g1.edgeadd(0, 1);
    g1.edgeadd(1, 2);
    g1.edgeadd(2, 3);
    g1.edgeadd(3, 0);
    g1.edgeadd(2, 4);
    g1.edgeadd(4, 2);
    if(g1.isStronglyConnected())
    { 
    cout << "Graph 1 is Strongly Connected" << endl;
    }
    else
    {
        cout << "Graph 1 is Not Strongly Connected" << endl;
    }
    // Graph 2 (Not Strongly Connected)
    graph g2(4);
    g2.edgeadd(0, 1);
    g2.edgeadd(1, 2);
    g2.edgeadd(2, 3);
    if(g2.isStronglyConnected())
    {
    cout << "Graph 2 is Strongly Connected" << endl;
    }
    else
    {
        cout << "Graph 2 is Not Strongly Connected" << endl;
    }    
    return 0;
}
#include <iostream>
using namespace std;
class Node
{
public:
    int vertex;
    Node* next;
    Node(int v)
    {
        vertex = v;
        next = NULL;
    }
};
class Graph
{
    int numVertices;
    Node** adjLists;
public:
    Graph(int vertices)
    {
        numVertices = vertices;
        adjLists = new Node*[numVertices];
        for (int i = 0; i < numVertices; i++)
        {
            adjLists[i] = NULL;
        }
    }
    void addEdge(int s, int d)
    {
        // Add edge from s to d
        Node* newNode = new Node(d);
        newNode->next = adjLists[s];
        adjLists[s] = newNode;
        // Add edge from d to s
        newNode = new Node(s);
        newNode->next = adjLists[d];
        adjLists[d] = newNode;
    }
    void printGraph()
    {
        for (int i = 0; i < numVertices; i++)
        {
            Node* temp = adjLists[i];
            cout << "Vertex " << i << " : ";
            while (temp != NULL)
            {
                cout << temp->vertex << " -> ";
                temp = temp->next;
            }
            cout << "NULL" << endl;
        }
    }
};
int main()
{
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(0, 3);
    g.addEdge(1, 2);
    g.printGraph();
    return 0;
}
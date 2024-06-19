#include <iostream>
#include <vector>
using namespace std;

class Graph
{
public:
    vector<vector<int>> adjMatrix;
    int numVertices;

    Graph(int size)
    {
        numVertices = size;
        adjMatrix.resize(size, vector<int>(size, 0));
    }

    void addEdge(int i, int j)
    {
        if (i >= numVertices && j >= numVertices)
            return;
        adjMatrix[i][j] = 1;
        adjMatrix[j][i] = 1;
    }

    void removeEdge(int i, int j)
    {
        if (adjMatrix[i][j] == 0)
        {
            return;
        }
        adjMatrix[i][j] = 0;
        adjMatrix[j][i] = 0;
    }

    void traverseMatrix()
    {
        for (int i = 0; i < numVertices; i++)
        {
            cout << i << " : ";
            for (int j = 0; j < numVertices; j++)
                cout << adjMatrix[i][j] << " ";
            cout << "\n";
        }
    }
};

int main()
{
    Graph g = Graph(5);

    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);

    g.traverseMatrix();

    return 0;
}
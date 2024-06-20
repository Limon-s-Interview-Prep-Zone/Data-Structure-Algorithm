#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <queue>

using namespace std;

#pragma region bfs
void addEdge(vector<int> adj[], int s, int d)
{
    adj[s].push_back(d);
    adj[d].push_back(s);
}
void bfs(int node, vector<int> adj[], unordered_map<int, bool> &visited)
{
    queue<int> queue;
    queue.push(node);
    visited[node] = 1;
    while (queue.size())
    {
        int curr = queue.front();
        queue.pop();
        cout << curr << " ";
        for (auto neighbor : adj[curr])
        {
            if (!visited[neighbor])
            {
                visited[neighbor] = 1;
                queue.push(neighbor);
            }
        }
    }
}
#pragma endregion bfs

#pragma region bfs from a given list of edges
vector<vector<int>> convertEdgesToAdjList(vector<vector<int>> edges, int v)
{
    vector<vector<int>> adj(v);
    for (auto edge : edges)
    {
        adj[edge[0]].push_back(edge[1]);
        adj[edge[1]].push_back(edge[0]);
    }
    return adj;
}

void bfsEdges2AdjList(int node, vector<vector<int>> adj)
{
    unordered_set<int> visited;
    queue<int> queue;
    queue.push(node);
    visited.insert(node);
    while (queue.size())
    {
        int curr = queue.front();
        queue.pop();
        cout << curr << " ";
        for (auto neighbor : adj[curr])
        {
            if (visited.count(neighbor) == 0)
            {
                visited.insert(neighbor);
                queue.push(neighbor);
            }
        }
    }
}
#pragma endregion bfs from a given list of edges

#pragma region bfs for given matrix
unordered_map<int, vector<int>> convertMatrix2AdjList(vector<vector<int>> matrix)
{
    int numRows = matrix.size();
    int numColums = matrix[0].size();
    unordered_map<int, vector<int>> matrix2AdjList;
    for (int row = 0; row < numRows; row++)
    {
        for (int col = 0; col < numColums; col++)
        {
            if (matrix[row][col] == 1)
            {
                matrix2AdjList[row].push_back(col);
                matrix2AdjList[col].push_back(row);
            }
        }
    }
    return matrix2AdjList;
}

void bfsMatrix2AdjList(int node, unordered_map<int, vector<int>> matrix2AdjList)
{
    unordered_set<int> visited;
    queue<int> queue;
    queue.push(node);
    visited.insert(node);
    while (queue.size())
    {
        int curr = queue.front();
        queue.pop();
        cout << curr << " ";
        for (auto neighbor : matrix2AdjList[curr])
        {
            if (visited.count(neighbor) == 0)
            {
                visited.insert(neighbor);
                queue.push(neighbor);
            }
        }
    }
}
#pragma endregion bfs from a given matrix
int main()
{
    int v = 4;
    vector<int> adj[v];
    unordered_map<int, bool> visited;
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 2);
    addEdge(adj, 2, 0);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 3);
    bfs(2, adj, visited);
    cout << endl;

    vector<vector<int>> edges = {{0, 1}, {0, 2}, {1, 2}, {2, 0}, {2, 3}, {3, 3}};
    vector<vector<int>> edges2AdjList = convertEdgesToAdjList(edges, v);
    bfsEdges2AdjList(2, edges2AdjList);

    cout << endl;
    vector<vector<int>> matrix = {
        {0, 1, 1, 0},
        {0, 0, 1, 0},
        {1, 0, 0, 1},
        {0, 0, 0, 1}};
    unordered_map<int, vector<int>> matrix2AdjList = convertMatrix2AdjList(matrix);
    bfsMatrix2AdjList(2, matrix2AdjList);

    return 0;
}

/*
SC: O(V)+O(2E)=O(V+E)
SC: O(n)+O(n)=O(n)
*/
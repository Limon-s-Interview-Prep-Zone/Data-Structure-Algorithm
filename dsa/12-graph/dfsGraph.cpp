#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void dfs(int node, vector<int> adj[], unordered_map<int, bool> &visited, vector<int> &ls)
{
    visited[node] = 1;
    cout << node << " ";
    for (auto neighbor : adj[node])
    {
        if (!visited[neighbor])
        {
            dfs(neighbor, adj, visited, ls);
        }
    }
}

void addEdge(vector<int> adj[], int s, int d)
{
    adj[s].push_back(d);
    adj[d].push_back(s);
}

int main()
{
    int V = 5;
    vector<int> adj[V];
    unordered_map<int, bool> visited;
    vector<int> ls;

    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 2);
    addEdge(adj, 2, 0);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 3);

    dfs(2, adj, visited, ls);

    return 0;
}

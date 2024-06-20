class Graph:
    def __init__(self, size) -> None:
        self.size = size
        self.adjList = [[] for _ in range(size)]
        self.visit = set()

    def addEdge(self, u, v):
        self.adjList[u].append(v)
        self.adjList[v].append(u)

    def dfs(self, node):
        self.visit.add(node)
        for i in self.adjList[node]:
            if i not in self.visit:
                self.dfs(i)

    def traverseGraph(self):
        for d in self.visit:
            print(f"{d}", end=" ")
        print()


if __name__ == "__main__":
    g = Graph(4)
    g.addEdge(0, 1)
    g.addEdge(0, 2)
    g.addEdge(1, 2)
    g.addEdge(2, 0)
    g.addEdge(2, 3)
    g.addEdge(3, 3)
    g.dfs(2)
    g.traverseGraph()

'''
TC: O(E+V) V is the number of vertices and E is the number of edges in the graph
SC: O(V + E), visited array size V is required, And stack size=E
'''
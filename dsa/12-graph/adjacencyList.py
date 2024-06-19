class Graph:
    def __init__(self, vertics) -> None:
        self.v= vertics
        self.adjList=[[] for _ in range(vertics)]
    
    def addEdge(self, s, d):
        self.adjList[s].append(d)
        self.adjList[d].append(s)

    def traverseGraph(self):
        for d in range(self.v):
            print(f"Vertex {d}:", end="")
            for x in self.adjList[d]:
                print(f" -> {x}", end="")
            print()

if __name__ == "__main__":
    V = 5
    graph = Graph(V)

    graph.addEdge(0, 1)
    graph.addEdge(0, 2)
    graph.addEdge(0, 3)
    graph.addEdge(1, 2)

    graph.traverseGraph()
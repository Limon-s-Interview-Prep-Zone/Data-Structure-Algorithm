class Graph:

    def __init__(self, size) -> None:
        self.adjMatrix = []
        for _ in range(size):
            self.adjMatrix.append([0 for _ in range(size)])
        self.size = size

    def addEdge(self, v1, v2):
        if v1 >= self.size and v2>=self.size:
            return
        if v1 == v2:
            print("Same vertex %d and %d" % (v1, v2))
    
        self.adjMatrix[v1][v2] = 1
        self.adjMatrix[v2][v1] = 1

    def removeEdge(self, v1, v2):
        if self.adjMatrix[v1][v2] == 0:
            return

        self.adjMatrix[v1][v2] = 0
        self.adjMatrix[v2][v1] = 0

    def __len__(self) -> int:
        return self.size

    def traverseMatrix(self):
        for i, row in enumerate(self.adjMatrix):
            print(i, end=": ")
            for val in row:
                print(val, end=" ")
            print()


def main():
    g = Graph(5)
    g.addEdge(0, 1)
    g.addEdge(0, 2)
    g.addEdge(1, 2)
    g.addEdge(2, 0)
    g.addEdge(2, 3)
    g.removeEdge(2,3)

    g.traverseMatrix()


if __name__ == "__main__":
    main()

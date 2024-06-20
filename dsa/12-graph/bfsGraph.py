from collections import deque
from typing import List


class Graph:
    def __init__(self, v) -> None:
        self.v = v
        self.adjList = [[0] for _ in range(v)]
        self.adjHashSets = {}

    def addEdge(self, s, d) -> None:
        self.adjList[s].append(d)
        self.adjList[d].append(s)

    def bfs(self, node: int):
        visited = set()
        visited.add(node)
        queue = deque()
        queue.append(node)

        while queue:
            curr = queue.popleft()
            print(curr, end=" ")
            for neighbor in self.adjList[curr]:
                if neighbor not in visited:
                    visited.add(neighbor)
                    queue.append(neighbor)

    def bfsWithHashSets(self, node: int):
        visited = set()
        visited.add(node)
        queue = deque()
        queue.append(node)

        while queue:
            curr = queue.popleft()
            print(curr, end=" ")
            for neighbor in self.adjHashSets[curr]:
                if neighbor not in visited:
                    visited.add(neighbor)
                    queue.append(neighbor)

    def convertEdges2AdjList(self, edges: List[List[int]]):
        for src, des in edges:
            self.adjList[src].append(des)
            self.adjList[des].append(src)

    def convertEdges2AdjListHashSet(self, edges: List[List[int]]):
        for src, des in edges:
            if src not in self.adjHashSets:
                self.adjHashSets[src] = []
            if des not in self.adjHashSets:
                self.adjHashSets[des] = []

            self.adjHashSets[src].append(des)
            self.adjHashSets[des].append(src)

    def convertMatrix2AdjList(self, matrix: List[List[int]]):
        for r, row in enumerate(matrix):
            for c, _ in enumerate(row):
                if matrix[r][c] == 1:
                    self.adjList[r].append(c)
                    self.adjList[c].append(r)

    def convertMatrix2AdjListHashSet(self, matrix: List[List[int]]):
        for r, row in enumerate(matrix):
            for c, _ in enumerate(row):
                if matrix[r][c] == 1:
                    if r not in self.adjHashSets:
                        self.adjHashSets[r] = []
                    if c not in self.adjHashSets:
                        self.adjHashSets[c] = []

                    self.adjHashSets[r].append(c)
                    self.adjHashSets[c].append(r)


if __name__ == "__main__":
    g = Graph(4)
    """ block: insert edge one at a time"""
    # g.addEdge(0, 1)
    # g.addEdge(0, 2)
    # g.addEdge(1, 2)
    # g.addEdge(2, 0)
    # g.addEdge(2, 3)
    # g.addEdge(3, 3)
    # g.bfs(2)
    """end block: insert edge one at a time"""

    edges = [[0, 1], [0, 2], [1, 2], [2, 0], [2, 3], [3, 3]]
    matrix = [[0, 1, 1, 0], [0, 0, 1, 0], [1, 0, 0, 1], [0, 0, 0, 1]]
    ### Edges to Adjacency List
    # g.convertEdges2AdjList(edges)
    # g.bfs(2)
    ### End of Edges to Adjacency List

    ### Edges with adjacency list in HashSet
    # g.convertEdges2AdjListHashSet(edges)
    # g.bfsWithHashSets(2)
    ###

    ### Matrix to Adjacency List
    g.convertMatrix2AdjList(matrix)
    g.bfs(2)
    ### End of Matrix to Adjacency List
    print()

    ### Matrix to Adjacency List in hashset
    g.convertMatrix2AdjListHashSet(matrix)
    g.bfsWithHashSets(2)
    ### Matrix to Adjacency List in hashset


"""
SC: O(V)+O(E)
SC: O(n)+O(n)=O(n)
"""

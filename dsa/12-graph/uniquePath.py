from collections import deque


# backtracking
def dfs(matrix, r, c, visit: set):
    rows, cols = len(matrix), len(matrix[0])
    if min(r, c) < 0 or r == rows or c == cols or (r, c) in visit or matrix[r][c] == 1:
        return 0
    if r == rows - 1 and c == cols - 1:
        return 1

    visit.add((r, c))

    count = 0
    count += dfs(matrix, r + 1, c, visit)
    count += dfs(matrix, r - 1, c, visit)
    count += dfs(matrix, r, c + 1, visit)
    count += dfs(matrix, r, c - 1, visit)

    visit.remove((r, c))
    return count


def bfs(grid):
    if not grid or not grid[0]:
        return 0

    rows, cols = len(grid), len(grid[0])
    start = (0, 0)
    end = (rows - 1, cols - 1)

    if grid[0][0] == 1 or grid[rows - 1][cols - 1] == 1:
        return 0

    queue = deque([(start, set([start]))])
    pathCount = 0

    directions = [(-1, 0), (1, 0), (0, -1), (0, 1)]

    while queue:
        (r, c), visited = queue.popleft()

        if (r, c) == end:
            pathCount += 1
            continue

        for dr, dc in directions:
            nr, nc = r + dr, c + dc
            if (
                0 <= nr < rows
                and 0 <= nc < cols
                and (nr, nc) not in visited
                and grid[nr][nc] == 0
            ):
                new_visited = visited.copy()
                new_visited.add((nr, nc))
                queue.append(((nr, nc), new_visited))

    return pathCount


matrix = [[0, 0, 0, 0], [1, 1, 0, 0], [0, 0, 0, 1], [0, 1, 0, 0]]

print(dfs(matrix, 0, 0, set()))  # Output: 2 # TC=O(4^(r*c)) SC: O(r*n)

print(bfs(matrix))  # Output: 2 #TC=O(r*c) SC: O(r*n)

from typing import List


class Node:
    def __init__(self, val):
        self.left = None
        self.right = None
        self.val = val

# DFS Traverse
# inorder: left->root->right
def inorder(root) -> None:
    if root is None:
        return
    if root:
        # Traverse left
        inorder(root.left)
        # Traverse root
        print(str(root.val) + "->", end="")
        # Traverse right
        inorder(root.right)

# DFS Traverse
# postOrder: left->right->root
def postorder(root) -> None:

    if root:
        # Traverse left
        postorder(root.left)
        # Traverse right
        postorder(root.right)
        # Traverse root
        print(str(root.val) + "->", end="")

# DFS Traverse
# postOrder: root->left->right
def preorder(root) -> None:

    if root:
        # Traverse root
        print(str(root.val) + "->", end="")
        # Traverse left
        preorder(root.left)
        # Traverse right
        preorder(root.right)

# BFS traverse
def bFSTraverse(root) -> None:
    if root is None:
        return
    queue = [root]
    l = 0
    while len(queue) > 0:
        print("Lavel:", l)
        for i in range(len(queue)):
            curr = queue.pop(0)
            print(curr.val, end=" ")
            if curr.left:
                queue.append(curr.left)
            if curr.right:
                queue.append(curr.right)
        l += 1
        print()

def countNodes(root: Node) -> int:
    if root is None:
        return 0
    else:
        return 1 + countNodes(root.left) + countNodes(root.right)


def maxDepthRecursive(root: Node) -> int:
    if root is None:
        return 0
    return 1 + max(maxDepthRecursive(root.left), maxDepthRecursive(root.right))

def maxDepthDFS(root) -> int:
    if root is None:
        return 0
    stack = [[root, 1]]

    l = 1
    while stack:
        node, depth = stack.pop()
        if node:
            l = max(l, depth)
            stack.append([node.left, depth+1])
            stack.append([node.right, depth+1])
    return l

def maxDepthBFS(root) -> int:
    if root is None:
        return
    queue = [root]
    l = 0
    while queue:
        
        for _ in range(len(queue)):
            curr = queue.pop(0)

            if curr.left:
                queue.append(curr.left)
            if curr.right:
                queue.append(curr.right)
        l += 1
    return l

def convertList2Tree(nums: List[int]) -> Node:
    root = Node(nums[0])
    queue = [root]
    i = 1
    l = len(nums)
    while i < l:
        curr = queue.pop(0)
        if i < l:
            curr.left = Node(nums[i])
            queue.append(curr.left)
            i += 1
        if i < l:
            curr.right = Node(nums[i])
            queue.append(curr.right)
            i += 1
    return root


# driver Code
if __name__ == "__main__":
    nums = [1, 2, 3, 4, 5, 6, 6, 6, 6]
    root = convertList2Tree(nums)

    # print("Inorder traversal ")
    # inorder(root)

    # print("\nPreorder traversal ")
    # preorder(root)

    # print("\nPostorder traversal ")
    # postorder(root)
    # bFSTraverse(root)
    # Maxx depth
    print("maxDepthRecursive():", maxDepthRecursive(root))
    print("maxDepthBFS():", maxDepthBFS(root))
    print("maxDepthDFS():", maxDepthDFS(root))
    print("CountNodes:", countNodes(root))

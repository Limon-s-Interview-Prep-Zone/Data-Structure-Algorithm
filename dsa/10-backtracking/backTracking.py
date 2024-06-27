from typing import List


class TreeNode:
    def __init__(self, val):
        self.val = val
        self.left = None
        self.right = None


def canReachLeaf(root: TreeNode) -> bool:
    if root is None or root.val == 0:
        return True

    if root.left is None or root.right is None:
        return True

    if canReachLeaf(root.left):
        return True

    if canReachLeaf(root.right):
        return True

    return False


def leafPath(root: TreeNode, path: List[int]) -> bool:

    if root is None or root.val == 0:
        return True

    path.append(root.val)

    if not root.left and not root.right:
        return True

    if leafPath(root.left, path):
        return True
    if leafPath(root.right, path):
        return True
    path.pop()
    return False


if __name__ == "__main__":
    root = TreeNode(4)
    root.left = TreeNode(0)
    root.left.right = TreeNode(7)
    root.right = TreeNode(1)
    root.right.left = TreeNode(3)
    root.right.left.right = TreeNode(0)
    root.right.right = TreeNode(2)

    print(canReachLeaf(root))
    nums = []
    print(leafPath(root, nums))
    print(nums)

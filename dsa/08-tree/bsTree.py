class TreeNode:
    def __init__(self, val):
        self.val = val
        self.left = None
        self.right = None


def search(root: TreeNode, target: int) -> bool:
    if not root:
        return False

    if target > root.val:
        return search(root.right, target)
    elif target < root.val:
        return search(root.left, target)
    else:
        return True


def insert(root: TreeNode, val: int) -> TreeNode:
    if root is None:
        return TreeNode(val)
    if val > root.val:
        root.right = insert(root.right, val)
    elif val < root.val:
        root.left = insert(root.left, val)
    return root


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


def minValueNode(root: TreeNode) -> TreeNode:
    curr = root
    while curr and curr.left:
        curr = curr.left
    curr


def remove(root: TreeNode, value: int):
    if root is None:
        return
    if value > root.val:
        root.right = remove(root.right, value)
    elif value < root.val:
        root.left = remove(root.left, value)
    else:
        # Node with only one child or no child
        if not root.left:
            return root.right
        elif root.right is None:
            return root.left
        # Node with 2 children
        else:
            minNode = minValueNode(root.right)
            root.val = minNode.val
            root.right = remove(root.right, minNode.val)
    return root


if __name__ == "__main__":
    root = insert(None, 4)
    insert(root, 3)
    insert(root, 6)
    insert(root, 2)
    insert(root, 5)
    insert(root, 7)
    inorder(root)
    remove(root, 7)
    print()
    inorder(root)

    #         4
    #      /     \
    #     3       6
    #    /  \    /  \
    #   2   4  5    7

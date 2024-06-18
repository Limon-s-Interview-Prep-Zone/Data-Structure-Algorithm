# A node structure
class Node:

	# A utility function to create a new node
	def __init__(self, key):
		self.data = key
		self.left = None
		self.right = None

# Print nodes at a current level
def bfs(root):
	if root is None:
		return
	queue =[]
	queue.append(root)
	while(len(queue)>0):
		print(queue[0].data, end=" ")
		node= queue.pop(0)

		if node.left is not None:
			queue.append(node.left)

		# Enqueue right child
		if node.right is not None:
			queue.append(node.right)


# Driver program to test above function
if __name__ == '__main__':
	root = Node(1)
	root.left = Node(2)
	root.right = Node(3)
	root.left.left = Node(4)
	root.left.right = Node(5)
	root.left.left.left = Node(14)

	print("Level order traversal of binary tree is -")
	bfs(root)

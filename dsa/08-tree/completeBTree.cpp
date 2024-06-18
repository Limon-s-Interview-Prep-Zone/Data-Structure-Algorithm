#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *left, *right;
};

Node *createNode(int data)
{
    Node *n_node = (Node *)malloc(sizeof(Node));
    n_node->data = data;
    n_node->left = NULL;
    n_node->right = NULL;

    return n_node;
}

bool is_complete_b_tree(Node *root, int index, int count)
{
    if (root == NULL)
        return true;
    if(index>=count) return false;

    return (is_complete_b_tree(root->left, 2*index+1, count) && is_complete_b_tree(root->right, 2*index+2, count));
}

unsigned int count_nodes(Node *root)
{
    if (root == NULL)
        return 0;
    return (1 + count_nodes(root->left) + count_nodes(root->right));
}
void travere_inorder(Node *node)
{
    if (node == NULL)
        return;
    travere_inorder(node->left);
    cout << node->data << " ";
    travere_inorder(node->right);
    /**
     * Time Complexity: O(N)
     * space complexity: O(h) height of the tree.
     */
}

int main()
{
    Node *root = createNode(1);
    root->left = createNode(12);
    root->right = createNode(9);
    root->left->left = createNode(5);
    root->left->right = createNode(6);
    root->right->left = createNode(10);

    travere_inorder(root);

    int index = 0;
    int count = count_nodes(root);

    if (is_complete_b_tree(root, index, count))
        cout << "Complete Binary Tree\n";
    else
        cout << "Not a Complete Binary tree\n";

    return 0;
}
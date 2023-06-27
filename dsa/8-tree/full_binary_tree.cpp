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

bool is_full_b_tree(Node *root)
{
    if (root == NULL)
        return true;
    if (root->left == NULL && root->right == NULL)
        return true;
    if (root->left && root->right)
        return (is_full_b_tree(root->left) && is_full_b_tree(root->right));
    return false;
}

int main()
{
    Node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->left->right->left = createNode(6);
    root->left->right->right = createNode(7);

    if (is_full_b_tree(root))
        cout << "The tree is a full binary tree\n";
    else
        cout << "The tree is not a full binary tree\n";

    return 0;
}
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
};

Node *crateNode(int data)
{
    Node *n_node = (Node *)malloc(sizeof(Node));
    n_node->data = data;
    n_node->left = NULL;
    n_node->right = NULL;

    return n_node;
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

void travere_preorder(Node *node)
{
    if (node == NULL)
        return;
    cout<<node->data<<" ";
    travere_inorder(node->left);
    travere_inorder(node->right);
    /**
     * Time Complexity: O(N)
     * space complexity: O(h) height of the tree.
     */
}

void travere_postorder(Node *node)
{
    if (node == NULL)
        return;
    travere_inorder(node->left);
    travere_inorder(node->right);
    cout<<node->data<<" ";

    /**
     * Time Complexity: O(N)
     * space complexity: O(h) height of the tree.
     */
}

int main()
{
    Node *root = crateNode(1);
    root->left = crateNode(3);
    root->right = crateNode(4);
    root->left->left = crateNode(5);

    travere_inorder(root);
    cout<<"\nPreorder: \n";
    travere_preorder(root);
    cout<<"\n Post Order: \n";
    travere_postorder(root);

    return 0;
}
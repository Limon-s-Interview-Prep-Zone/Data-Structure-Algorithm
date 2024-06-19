#include <iostream>
#include <queue>

using namespace std;

class ListNode
{
public:
    int data;
    ListNode *left, *right;

    ListNode(int data1)
    {
        data = data1;
        left = nullptr;
        right = nullptr;
    }
};
#pragma region Insertion
ListNode *convertArray2Tree(vector<int> &nums)
{
    ListNode *root = new ListNode(nums[0]);
    queue<ListNode *> q;
    q.push(root);
    int i = 1;
    int n = nums.size();
    while (i < n)
    {
        ListNode *curr = q.front();
        q.pop();
        if (i < n)
        {
            ListNode *newNode = new ListNode(nums[i]);
            curr->left = newNode;
            q.push(newNode);
            i++;
        }
        if (i < n)
        {
            ListNode *newNode = new ListNode(nums[i]);
            curr->right = newNode;
            q.push(newNode);
            i++;
        }
    }
    return root;
    // TC: O(n) SC:O(n)
}

ListNode *crate_Node(int data)
{
    ListNode *n_node = (ListNode *)malloc(sizeof(ListNode));
    n_node->data = data;
    n_node->left = NULL;
    n_node->right = NULL;

    return n_node;
}
ListNode *crateNode(int data)
{
    return new ListNode(data);
}

#pragma endregion Insertion

#pragma region DFS traverse
void travereInorder(ListNode *node)
{
    if (node == NULL)
        return;
    travereInorder(node->left);
    cout << node->data << " ";
    travereInorder(node->right);
    /**
     * Time Complexity: O(N)
     * space complexity: O(h) height of the tree.
     */
}

void traverePreorder(ListNode *node)
{
    if (node == NULL)
        return;
    cout << node->data << " ";
    travereInorder(node->left);
    travereInorder(node->right);
    /**
     * Time Complexity: O(N)
     * space complexity: O(h) height of the tree.
     */
}

void traverePostorder(ListNode *node)
{
    if (node == NULL)
        return;
    travereInorder(node->left);
    travereInorder(node->right);
    cout << node->data << " ";

    /**
     * Time Complexity: O(N)
     * space complexity: O(h) height of the tree.
     */
}
#pragma endregion DFS traverse
#pragma region BFS traverse
void BFSTraverse(ListNode *root)
{
    queue<ListNode *> queue;
    if (root)
        queue.push(root);
    int l = 0;
    while (queue.size() > 0)
    {
        int n = queue.size();
        cout << "Level: " << l << endl;
        for (int j = 0; j < n; j++)
        {
            ListNode *curr = queue.front();
            queue.pop();
            cout << curr->data << " ";
            if (curr->left)
            {
                queue.push(curr->left);
            }
            if (curr->right)
            {
                queue.push(curr->right);
            }
        }
        l++;
        cout<<"\n";
    }
}
#pragma endregion BFS traverse
unsigned int countNodes(ListNode *root)
{
    if (root == NULL)
        return 0;
    return (1 + countNodes(root->left) + countNodes(root->right));
}

int maxDepth(ListNode *root)
{
    if (root == NULL)
        return 0;
    return 1 + max(maxDepth(root->left), maxDepth(root->right));
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 6, 6, 6};
    ListNode *root = convertArray2Tree(nums);

    cout << "Inorder: ";
    travereInorder(root);

    cout << "\nPreorder: ";
    traverePreorder(root);

    cout << "\nPostOrder: ";
    traverePostorder(root);

    cout << "End of DFS" << endl;
    cout << "BFS:" << endl;
    BFSTraverse(root);

    cout << "\nTotal Nodes: " << countNodes(root) << endl;
    cout << "MaxDepth: " << maxDepth(root) << endl;

    return 0;
}
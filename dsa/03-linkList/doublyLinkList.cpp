#include <iostream>
#include <vector>
using namespace std;

class ListNode
{
public:
    int data;
    ListNode *next;
    ListNode *prev;
    ListNode(int val)
    {
        data = val;
        next = nullptr;
        prev = nullptr;
    }

    ListNode(int val, ListNode *next1, ListNode *prev1)
    {
        data = val;
        next = next1;
        prev = prev1;
    }
};
#pragma region common methods
/// @brief convert array to a link list
/// @param arrs
/// @return
ListNode *convertArray2LL(vector<int> &arrs)
{
    ListNode *head = new ListNode(arrs[0]);
    ListNode *curr = head;
    for (int i = 1; i < arrs.size(); ++i)
    {
        ListNode *newNode = new ListNode(arrs[i]);
        newNode->prev = curr;
        newNode->next = nullptr;
        curr->next = newNode;
        curr = newNode;
    }
    return head;
}

/// @brief Traverse a ListNode based on head pointer
/// @param head
void traverse(ListNode *head)
{
    ListNode *temp = head;
    while (temp)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}
/// @brief Return the len of the ListNode
/// @param head
/// @return
int lenOfListNode(ListNode *head)
{
    ListNode *curr = head;
    int count = 0;
    for (; curr != NULL; curr = curr->next)
    {
        count++;
    }
    return count;
}
#pragma endregion common methods

#pragma region Remove Functionalites
/// @brief Remove the first node from LL
/// @param head
/// @return
ListNode *removeAtFirst(ListNode *head)
{

    if (head == NULL)
        return head;
    ListNode *curr = head;
    head = head->next;
    head->prev = nullptr;
    curr->next = nullptr;
    delete curr;
    return head;
}
/// @brief Delete last node from a link list;
/// @param head
/// @return head
ListNode *removeAtLast(ListNode *head)
{

    if (head == NULL)
        return head;
    ListNode *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->prev->next = nullptr;
    delete temp;

    return head;
}

/// @brief Remove at kth node from a linklist
/// @param head
/// @param k
/// @return
ListNode *removeAtKPosition(ListNode *head, int k)
{
    if (head == NULL)
        return head;

    ListNode *curr = head;
    int count = 0;
    while (curr != NULL)
    {
        count++;
        if (count == k)
        {
            ListNode *prev = curr->prev;
            ListNode *next = curr->next;
            if (prev == NULL && next == NULL)
                return NULL;
            else if (prev == NULL)
                return removeAtFirst(head);
            else if (next == NULL)
                return removeAtLast(head);
            prev->next = next;
            next->prev = prev;

            curr->next = nullptr;
            curr->prev = nullptr;
            delete (curr);
            break;
        }
        curr = curr->next;
    }
    return head;
}
#pragma endregion Remove Functionalites

#pragma region Insert Operations
/// @brief Insert an item at the begaining of a link list
/// @param value
/// @param head
/// @return head
ListNode *insertAtFirst(int value, ListNode *head)
{
    ListNode *next = head;
    ListNode *newNode = new ListNode(value);
    newNode->next = next;
    next->prev = newNode;
    return newNode;
}

ListNode *insertAtLast(int value, ListNode *head)
{
    if (head == NULL)
        return new ListNode(value);

    ListNode *curr = head;
    while (curr->next->next != NULL)
    {
        curr = curr->next;
    }
    ListNode *newNode = new ListNode(value);
    curr->next = newNode;
    newNode->prev = curr;
    return head;
}
ListNode *insertBeforeLast(int value, ListNode *head)
{
    if (head == NULL)
        return new ListNode(value);

    ListNode *curr = head;
    while (curr->next->next != NULL)
    {
        curr = curr->next;
    }
    
    ListNode *newNode = new ListNode(value);
    newNode->next = curr->next;
    newNode->prev = curr;
    curr->next = newNode;

    return head;
}
ListNode *insertBeforeKPosition(ListNode *head, int k, int val)
{
    if (k==1)
        return insertAtFirst(val, head);

    ListNode *curr = head;
    int count = 0;
    while (curr != NULL)
    {
        count++;
        if (count == k)
        {
            ListNode *newNode = new ListNode(val);
            newNode->next= curr;
            newNode->prev=curr->prev;
            
            curr->prev->next=newNode;
            curr->prev=newNode;
            break;
        }
        curr = curr->next;
    }
    return head;
}

#pragma endregion Insert Operations

int main()
{
    vector<int> nums = {2, 3, 4, 5};
    ListNode *head = convertArray2LL(nums);
    // head = removeAtFirst(head);
    // head = removeAtLast(head);
    // head = removeAtKPosition(head, 5);
    // head = insertAtFirst(200, head);
    // head = insertAtLast(200, head);
    // head = insertBeforeLast(99, head);
    head = insertBeforeKPosition(head, 3, 200);

    traverse(head);
    // cout << lenOfListNode(head) << endl;
    return 0;
}
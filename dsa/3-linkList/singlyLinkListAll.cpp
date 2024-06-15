#include <iostream>
#include <vector>
using namespace std;

class ListNode
{
public:
    int data;
    ListNode *next;
    ListNode(int val)
    {
        data = val;
        next = nullptr;
    }

    ListNode(int val, ListNode *next1)
    {
        data = val;
        next = next1;
    }
};

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

/// @brief convert array to a link list
/// @param arrs
/// @return
ListNode *convertArray2LL(vector<int> &arrs)
{
    ListNode *head = new ListNode(arrs[0]);
    ListNode *curr = head;
    for (int i = 1; i < arrs.size(); ++i)
    {
        ListNode *temp = new ListNode(arrs[i]);
        curr->next = temp;
        curr = temp;
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
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
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
    if (k == 1)
    {
        // 1->nullptr
        ListNode *temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    ListNode *curr = head;
    ListNode *prev = nullptr;
    int count = 0;
    while (curr != NULL)
    {
        count++;
        if (count == k)
        {
            // k=2; 2->3->4
            prev->next = prev->next->next;
            free(curr);
            break;
        }
        prev = curr;
        curr = curr->next;
    }
    return head;
}
/// @brief Delete node of the given value
/// @param head
/// @param element
/// @return
ListNode *removeElement(ListNode *head, int element)
{
    if (head == NULL)
        return head;
    if (head->data == element)
    {
        ListNode *temp = head;
        head = temp->next;
        free(temp);
        return head;
    }
    ListNode *curr = head;
    ListNode *prev = nullptr;
    while (curr != NULL)
    {
        // ele=4; 2->3->4
        if (curr->data == element)
        {
            prev->next = curr->next;
            free(curr);
            break;
        }
        prev = curr;
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
    return new ListNode(value, head);
}
ListNode *insertAtLast(int value, ListNode *head)
{
    if (head == NULL)
        return new ListNode(value);

    ListNode *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    ListNode *newNode = new ListNode(value);
    curr->next = newNode;
    return head;
}
ListNode *insertAtKPosition(ListNode *head, int k, int value)
{
    if (head == NULL)
    {
        if (k == 1)
        {
            return new ListNode(value);
        }
        return head;
    }

    if (k == 1)
    {
        return new ListNode(value, head);
    }
    int count = 0;

    ListNode *curr = head;
    while (curr != NULL)
    {
        count++;
        if (count == (k - 1))
        {
            ListNode *newNode = new ListNode(value);
            newNode->next = curr->next;
            curr->next = newNode;
            break;
        }
        curr = curr->next;
    }
    return head;
}

ListNode *insertBeforeValue(ListNode *head, int element, int value)
{
    if (head == NULL) return head;

    if (head->data == value)
    {
        return new ListNode(value, head);
    }

    ListNode *curr = head;
    while (curr->next != NULL)
    {
        if (curr->next->data == value)
        {
            ListNode *newNode = new ListNode(element);
            newNode->next = curr->next;
            curr->next = newNode;
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
    // head=removeAtKPosition(head,4);
    // head = removeElement(head, 4);
    // head = insertAtFirst(200, head);
    // head = insertAtLast(200, head);
    // head = insertAtKPosition(head, 3, 200);
    head = insertBeforeValue(head, 100, 4);

    traverse(head);
    cout << lenOfListNode(head) << endl;
    return 0;
}
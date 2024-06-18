#include <iostream>
#include <iostream>

using std::cout;
using std::endl;

class ListNode
{
public:
    int val_;
    ListNode *next = nullptr;

    ListNode(int val)
    {
        val_ = val;
    }
};

class Queue
{
public:

    ListNode *front = nullptr;
    ListNode *rear = nullptr;

    Queue() {}

    void enqueue(int val)
    {
        ListNode *newNode = new ListNode(val);

        // Queue is non-empty
        if (rear != nullptr)
        {
            rear->next = newNode;
            rear = rear->next;
        }
        // Queue
        else
        {
            front = rear = newNode;
        }
    }

    int dequeue()
    {
        // Queue is empty
        if (front == nullptr)
        {
            return -1; // Better to throw an exception
        }

        int val = front->val_;
        front = front->next;
        return val;
    }

    void print()
    {
        ListNode *curr = front;
        while (curr != nullptr)
        {
            cout << curr->val_ << " -> ";
            curr = curr->next;
        }
        cout << endl;
    }
};

int main()
{
    Queue q = Queue();
    q.enqueue(12);
    q.enqueue(10);
    cout << q.dequeue() << endl;
    q.print();
    return 0;
}
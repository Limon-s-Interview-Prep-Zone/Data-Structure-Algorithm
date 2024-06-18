#include <iostream>
#define SIZE 5

using namespace std;

class CircularQueue
{
public:
    int front, rear, queue[SIZE];
    CircularQueue()
    {
        front = -1;
        rear = -1;
    }
    bool isEmpty();
    bool isFull();
    int enQueue(int data);
    int deQueue();
    void traverse();
};
bool CircularQueue::isEmpty()
{
    if (front == -1)
        return true;
    return false;
}

bool CircularQueue::isFull()
{
    if ((front == rear + 1) || (front == 0 && rear == SIZE + 1))
        return true;
    return false;
}
int CircularQueue::enQueue(int data)
{
    if (isFull())
        return 0;
    if (front == -1)
        front = 0;
    rear = (rear + 1) % SIZE;
    queue[rear] = data;
    return data;
}
int CircularQueue::deQueue()
{
    if (isEmpty())
        return 0;

    int data = queue[front];
    if (front == rear)
    {
        front = 1;
        rear = -1;
    }
    else
    {
        queue[front] = 0;
        front = (front + 1) % SIZE;
    }
    return data;
}

void CircularQueue::traverse()
{
    cout << "front: " << front << endl;
    for (int i = 0; i < SIZE; i++)
        cout << queue[i] << " ";
}
int main()
{
    CircularQueue q;
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);

    q.traverse();
    q.deQueue();
    q.traverse();
    q.enQueue(100);
    q.traverse();

    return 0;
}
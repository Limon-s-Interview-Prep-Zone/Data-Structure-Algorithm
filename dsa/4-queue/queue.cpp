#include <bits/stdc++.h>
#define SIZE 5

using namespace std;
class Queue
{
private:
int front, rear, items[SIZE];
public:
    
    Queue()
    {
        front = -1;
        rear = -1;
    }
    bool isFull()
    {
        if (front == 0 && rear == SIZE - 1)
            return true;
        return false;
    }
    bool isEmpty()
    {
        if (front == -1)
            return true;
        return false;
    }
    void enQueue(int data)
    {
        if (isFull())
        {
            cout << "queue is fulled";
            return;
        }
        front = front == -1 ? 0 : front;
        rear++;
        items[rear] = data;
    }
    int deQueue()
    {
        int data;
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return (-1);
        }

        data = items[front];
        // if only stack has only one element.
        if (front >= rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front++;
        }
        return data;
    }
    void display()
    {
        if (isEmpty())
        {
            cout << "queue is empty";
            return;
        }
        
        for (int i= front; i<=rear; i++)
        {
            cout << items[i] << " ";
        }
    }
};

int main()
{
    Queue q;
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);

    q.display();

    cout<<q.deQueue()<<endl;
    q.display();
    return 0;
}
// O(1)
// space coomplexity(1);
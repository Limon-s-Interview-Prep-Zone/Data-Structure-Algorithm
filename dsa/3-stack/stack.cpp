#include <bits/stdc++.h>
#include <iostream>

using namespace std;
#define MAX_SIZE 5
class Stack
{
    int TOP;

public:
    int array[MAX_SIZE];
    Stack()
    {
        TOP = -1;
    }
    bool isFull()
    {
        if (TOP > (MAX_SIZE - 1))
            return true;
        return false;
    }
    bool isEmpty()
    {
        if (TOP < 0)
            return true;
        return false;
    }
    void push(int item)
    {
        if (!isFull())
        {
            // TOP++;
            array[++TOP] = item;
        }
    }
    int peek()
    {
        if (!isEmpty())
        {
            return array[TOP];
        }
        return 0;
    }
    int pop()
    {
        if (isEmpty())
        {
            cout << "stack is empty";
            return 0;
        }
        else
        {
            int x = array[TOP--];
            // TOP--;
            return x;
        }
    }
};

int main()
{
    class Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.pop() << " Popped from stack\n";

    // print top element of stack after popping
    cout << "Top element is : " << s.peek() << endl;

    cout << "Stack example\n";
    while (!s.isEmpty())
    {
        cout << s.peek() << " ";
        // remove top element in stack
        s.pop();
    }
    return 0;
}
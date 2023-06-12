#include <iostream>
using namespace std;
struct Node *start;
struct Node
{
    int data;
    Node *next;
};

void display(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

void insert()
{
    int n, value;
    cin >> n;
    struct Node *temp;
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        if (i == 0)
        {
            start = (struct Node *)malloc(sizeof(struct Node));
            start->data = value;
            start->next = NULL;
            temp = start;
            continue;
        }
        else
        {
            temp->next = (struct Node *)malloc(sizeof(struct Node));
            temp = temp->next;
            temp->data = value;
            temp->next = NULL;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        start = NULL;
        insert();
        display(start);
        cout << endl;
    }
    return 0;
}

/*
https://practice.geeksforgeeks.org/problems/print-linked-list-elements/1
*/
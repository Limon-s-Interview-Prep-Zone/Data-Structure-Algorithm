#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node* next;
};

// insert at begin
void push(struct Node** headRef, int newData){
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));

    node->data = newData;
    node->next = (*headRef);
    (*headRef) = node;
}

// insert at the end
void append(struct Node** headRef, int newData){
    struct Node* node = (struct Node*) malloc(sizeof(struct Node));
    node->data = newData;

    Node* last = *headRef;
    node->next = NULL;

    if(*headRef==NULL){
        (*headRef) = node;
        return;
    }
    while(last->next != NULL){
        last= last->next;
    }
    last->next = node;
}

// print
void traverse(struct Node* head)
{
    while (head != NULL) {
       cout<<head->data<<" ";
        head = head->next;
    }
}
  
// Driver's code
int main()
{
    struct Node* head = NULL;
    push(&head, 10);
    append(&head, 100);
    traverse(head);
 
    return 0;
}
#include<iostream>
using namespace std;

int len(struct Node* head);
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
    node->next = NULL;

    Node* last = *headRef;
    

    if(*headRef==NULL){
        (*headRef) = node;
        return;
    }
    while(last->next != NULL){
        last= last->next;
    }
    last->next = node;
}

// insert at mid
void insertAtMid(struct Node** head_ref, int data){
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = data;

    if(*head_ref == NULL){
        new_node->next = NULL;
        *head_ref = new_node;
    }else{
        Node* t_head = *head_ref;
        int l = len(t_head);

        int count = (l%2==0)?(l/2):(l+1)/2;
        t_head = *head_ref;
        while(count > 1){
            t_head = t_head->next;
            --count;
        }
        new_node->next = t_head->next;
        t_head->next = new_node;
    }

}
// Create a Node
Node* createNode(int data){
    struct Node* new_node= (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

// get the length of the linkList
int len(struct Node* head){
    int length = 0;
    Node* current = head; 
    while(current != NULL){
        length++;
        current = current->next;
    }
    return length;
}

// insert at any position
void insertAtPosition(struct Node** head_ref, int data, int position){
    if(position<1 || position > len(*head_ref) )
        return;
    while(position--){
        if(position == 0){
            Node* temp =  createNode(data);
            temp->next = *head_ref;
            *head_ref = temp;
        }
        else{
            head_ref = &(*head_ref)->next;
        }
    }
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
    push(&head, 20);
    push(&head, 30);
    append(&head, 100);
    traverse(head);
    cout<<endl;

    insertAtMid(&head,1000);
    traverse(head);

    cout<<endl;

    insertAtPosition(&head,555, 3);
    traverse(head);

    return 0;
}
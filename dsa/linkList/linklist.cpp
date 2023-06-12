#include<iostream>
using namespace std;
void memoryLocation(){
    int a=12;
    int* b=&a;
    int** c=&b;
    cout<<"A="<<a<<"\t &A="<<&a<<endl;
    cout<<"B="<<b<<"\t &B="<<&b<<endl;
    cout<<"*&B="<<*(&b)<<"\t &*B="<<&(*b)<<endl;
    cout<<"C="<<c<<"\t &c="<<*(&c)<<endl;
}

struct Node {
    int data;
    struct Node* next;
};
  
// This function prints contents of linked list starting
// from the given node
void printList(struct Node* n)
{
    cout<<n<<endl;
    while (n != NULL) {
        cout<<n->data<<"\t";
        n = n->next;
    }
}
  
// Driver's code
int main()
{
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;
  
    // allocate 3 nodes in the heap
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    
    cout<<"Head: "<<head<<"\t sencond: "<<second<<"\t third: "<<third<<endl;

    head->data = 1; // assign data in first node
    head->next = second; // Link first node with second
  
    second->data = 2; // assign data to second node
    second->next = third;
  
    third->data = 3; // assign data to third node
    third->next = NULL;
  
    // Function call
    printList(head);
  
    return 0;
}
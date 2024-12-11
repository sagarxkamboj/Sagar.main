#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};
int size = 0;
// Using this function we will be creating new nodes
struct Node* getNode(int data)
{
   struct Node* newNode
= (struct Node*)malloc(
sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
// Using this function we will insert the newnode at the specific position
void insertAtPosition(struct Node* head, int pos, int data)
{
    if (pos < 1 || pos > size + 1)
        printf( "Invalid position!\n" );
    else {
       struct Node *curr=head;
        for(int i=1;i<pos-1;i++) curr="curr-">next;
        struct Node* temp=getNode(data);
        temp->next=curr->next;
        curr->next=temp;
        if(pos=1)
        head=temp;
        size++;
    }
}
// Using this function we will print the linked list
void printList(struct Node* head)
{
    while (head != NULL) {
        printf("%d ",head->data);
        head = head->next;
    }
    printf("\n");
}
// Driver function
int main()
{
    struct Node* head = NULL;
    head = getNode(1);
    head->next = getNode(2);
    head->next->next = getNode(3);
    head->next->next->next = getNode(4);
    head->next->next->next->next = getNode(5);
    size = 5;
    printf("Linked list before insertion: ");
    printList(head);
    int data = 6, pos = 2;
    insertAtPosition(head, pos, data);
    printf("Linked list after insertion of 6 at position 2: ");
    printList(head);
    
    return 0;
}
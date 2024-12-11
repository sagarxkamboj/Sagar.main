#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node * next;
};

void LLTraversal(struct Node* ptr)
{
    while (ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr= ptr->next;
    }
    
}


int main(){
    struct Node* head;
    struct Node* Second;
    struct Node* Third;
    struct Node* Fourth;

    head=(struct Node*)malloc(sizeof(struct Node));
    Second=(struct Node*)malloc(sizeof(struct Node));
    Third=(struct Node*)malloc(sizeof(struct Node));
    Fourth=(struct Node*)malloc(sizeof(struct Node));
    

    head ->data=12;
    head ->next=Second;

    Second ->data=33;
    Second ->next=Third;

    Third ->data=45;
    Third ->next=Fourth;

    Fourth ->data=58;
    Fourth ->next=NULL;

    LLTraversal(head);

    

    return 0;

}
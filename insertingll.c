#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node * next;
};

void LLinsertion(struct Node * ptr)
{
    while (ptr!=NULL)
    {
    
    printf("%d\n",ptr->data);
    ptr = ptr->next;
    }
}

int main()
{
    struct Node * head;
    struct Node * Second;
    struct Node * Third;
    struct Node * Fourth;
    struct Node * Fifth;
    struct Node * Sixth;

    head=(struct Node *)malloc(sizeof(struct Node));
    Second=(struct Node *)malloc(sizeof(struct Node));
    Third=(struct Node *)malloc(sizeof(struct Node));
    Fourth=(struct Node *)malloc(sizeof(struct Node));
    Fifth=(struct Node *)malloc(sizeof(struct Node));
    Sixth=(struct Node *)malloc(sizeof(struct Node));



      head ->data=10;
      head ->next=Second;

      Second->data=20;
      Second->next=Third;
      Third->data=30;
      Third->next=Fourth;
      Fourth->data=40;
      Fourth->next=Fifth;
      Fifth->data=50;
      Fifth->next=Sixth;
      Sixth->data=60;
      Sixth ->next=NULL;

      LLinsertion(head);

      int temp=head;
      head=head->next;
      free(temp);
      printf("After deldetion from beginning\n");

      LLinsertion(head);

}

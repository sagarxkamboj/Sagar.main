//Program for stack operations push,pop,show
#include<stdio.h>
#include<stdlib.h>

#define size 10
int top=-1,stack[size];
int x;

void push();
void pop();
void display();

void push()
{
    
    if (top==size-1)
    {
        printf("Stack is overflow\n");

    }
    else
    printf("Enter Elements that is entered to the stack\n");
    scanf("%d",&x);
    top=top+1;
    stack[top]=x;
    
}

void pop()
{
    if(top==-1)
    {
        printf("stack is underflow\n");

    }
    else
    printf("Element deleted from the stack is %d\n",stack[top]=x);
    top=top-1;
}

void display()
{
    if(top==-1)
    {
        printf("stack is underflow\n");
    }
    else
    for (int i = top; i >=0; i--)
    {
        printf("%d\n",stack[top]=x);
    }
    
}


void main()
{
    int choice;
    while (1)
    {
        printf("Enter your choice from the following\n");
        printf("1. push into stack\n 2. Pop from stack\n 3. Display the elements\n");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1: 
         push();
        break;

        case 2:
         pop();
         break;

        case 3:
         display();
         break;
        
        default:
        printf("wrong choice check again!!\n");

         break;
        }
    
    }
    
    
    

}
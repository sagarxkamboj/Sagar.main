#include<stdio.h>
int front=-1;
int rear=-1;
#define size 50
int arr[size];

void enqueue()
{
    int x;
    if (rear=size-1)
    {
        printf("Queue is overflow");
    }
    else
    {
        printf("Enter no. to be inserted into queue\n");
        scanf("%d",&x);
        rear++;
        arr[rear]=x;
        if (front=-1)
        {
            front=0;
        }
        
    }
    
}

void dequeue()
{
    if (rear=-1 && front=-1)
    {
        printf("Queue is underflow");
    }
    else if (front == rear)
    {
       front =-1;
       rear=-1;
    }
    else
    {
        printf("element are");
        for ( i = front; i < rear+1; i++)
        {
            printf("%d",arr[i]);
        }
        
    }
    
    {

    }
    
}
int main()
{

}
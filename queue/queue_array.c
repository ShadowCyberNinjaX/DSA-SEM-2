#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int front = -1, rear = -1;
void enqueue(int* q,int x){
    if(rear==MAX-1)
    {
        printf("queue is overflow\n");
    }
    if(front==-1 && rear==-1)
    {
        front=0;
        rear=0;
        q[rear]=x;
    }
    else
    {
        rear++;
        q[rear]=x;
    }
}
void dequeue(int * q)
{
    if(front==-1 && rear==-1)
    {
        printf("queue is underflow\n");
    }
    else if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else
    {
        front++;
    }
}
void display(int* q)
{
    if(front==-1 && rear==-1)
    {
        printf("queue is empty\n");
        return;
    }
    printf("queue elements are:\n");
    for(int i=front;i<=rear;i++)
    {
        printf("%d ",q[i]);
    }
}
int main()
{
    int* q=(int*)malloc(MAX*sizeof(int));
    enqueue(q,10);
    enqueue(q,20);
    enqueue(q,30);
    display(q);
    dequeue(q);
    display(q);
    return 0;
}
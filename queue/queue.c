//abstract queue
//------------------------------
//also called a first in first out(FIFO) data structure
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front=NULL;
struct node *rear=NULL;

void enqueue(int d)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=d;
    newnode->next=NULL;
    if(front==NULL && rear==NULL)
    {
        front=rear=newnode;
        return;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
}

void display()
{
    struct node *temp;
    if(front==NULL && rear==NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {
        temp=front;
    }
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
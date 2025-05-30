#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
struct Node* head=NULL;
//insert node at the beginning of the linked list
void insert(int x)
{
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->next=head;
    newnode->data=x;
    head=newnode;
}

//insert node at nth position of the linked list
void insertnode(int x, int n)
{
    struct Node* temp1=(struct Node*)malloc(sizeof(struct Node));
    temp1->data=x;
    temp1->next=NULL;
    if (n==1)
    {
        temp1->next=head;
        head=temp1;
        return;
    }
    struct Node* temp2=head;
    for(int i=0;i<n-2;i++)
    {
        temp2=temp2->next;
    }
    temp1->next=temp2->next;
    temp2->next=temp1;
}


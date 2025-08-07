#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node* head=NULL;
//Function to insert a node at the beginning of the linked list
void insertbeginning(int data)
{
    struct node* new=(struct node*)malloc(sizeof(struct node));
    new->data=data;
    new->next=head;
    head=new;
}
//Function to insert a node at the end of the linked list
void insertend(int data)
{
    struct node* new=(struct node*)malloc(sizeof(struct node));
    new->data=data;
    new->next=NULL;
    if(head==NULL)
    {
        head=new;
    }
    else
    {
        struct node* temo=head;
        while(temo->next!=NULL)
        {
            temo=temo->next;
        }
        temo->next=new;
    }
}
//Function to insert a node at a specific position
void insertn(int data,int n)
{
    struct node* new=(struct node*)malloc(sizeof(struct node));
    new->data=data;
    if(n==1)
    {
        new->next=head;
        head=new;
    }
    else
    {
        struct node* temp=head;
        for(int i=1;i<=n-2 && temp!=NULL;i++)
        {
            temp=temp->next;
        }
        new->next=temp->next;
        temp->next=new;
    }
}
//Function to delete the last node
void deletelast()
{
    if(head==NULL)
    {
        printf("List is empty\n");
        return;
    }
    else
    {
        struct node* temp=head;
        if(temp->next==NULL)
        {
            free(temp);
            head=NULL;
            return;
        }
        struct node* prev=NULL;
        while(temp->next!=NULL)
        {
            prev=temp;
            temp=temp->next;
        }
        free(temp);
        prev->next=NULL;
    }
}
//Function to delete a node at a specific position
void deleten(int n)
{
    if(head==NULL)
    {
        printf("List is empty\n");
        return;
    }
    struct node* temp=head;
    if(n==1)
    {
        head=temp->next;
        free(temp);
        return;
    }
    for(int i=1;i<n-1 && temp!=NULL;i++)
    {
        temp=temp->next;
    }
    if(temp==NULL || temp->next==NULL)
    {
        printf("Position does not exist\n");
        return;
    }
    struct node* todelete=temp->next;
    temp->next=todelete->next;
    free(todelete);
}
//Function to delete all nodes
void deleteall()
{
    struct node* current=head;
    struct node* next;
    while(current!=NULL)
    {
        next=current->next;
        free(current);
        current=next;
    }
}
//Function to display the linked list
void display()
{
    struct node* temp=head;
    if(temp==NULL)
    {
        printf("List is empty\n");
        return;
    }
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
//Function to display the linked list using recursion
void displayrecursion(struct node* node)
{
    if(node==NULL)
    {
        return;
    }
    printf("%d ",node->data);
    displayrecursion(node->next);
}
//Function to reverse the linked list
void reverseList(struct node* head) {
    struct node *prev = NULL, *current = head, *next = NULL;
    while (current != NULL) {
        next = current->next;     // Save next
        current->next = prev;     // Reverse current's pointer
        prev = current;           // Move prev ahead
        current = next;           // Move current ahead
    }
    head=prev;  // New head
}

//function to  reverse the linked list using recursion
void reverserecursion(struct node* current)
{
    if(current==NULL)
    {
        return;
    }
    if(current->next==NULL)
    {
        head=current;
        return;
    }
    reverserecursion(current->next);
    struct node* next=current->next;
    next->next=current;
    current->next=NULL;
}
//function to search for a key in the linked list
int searchList(struct node* head, int key) {
    int index = 0;
    while (head != NULL) {
        if (head->data == key)
            return index;
        head = head->next;
        index++;
    }
    return -1;  // Not found
}
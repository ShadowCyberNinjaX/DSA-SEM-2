#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};
struct node* head=NULL;
//reverse the linked list using iterative method
void reverse()
{
    struct node* temp=head,*prev=NULL,*next;
    while(temp!=NULL)
    {
        next=temp->next;
        temp->next=prev;
        prev=temp;
        temp=next;
    }
    head=prev;
}

//function to reverse linked list using recursion
void revrecurse(struct node* p)
{
    if(p->next==NULL)
    {
        head=p;
        return;
    }
    revrecurse(p->next);
    struct node* q=p->next;
    q->next=p;
    p->next=NULL;
}

void insertNode(int x)
{
    struct node* new=(struct node*)malloc(sizeof(struct node*));
    struct node* temp=head;
    new->data=x;
    if(head==NULL)
    {
        new->next=head;
        head=new;
        head->next=NULL;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=new;
        new->next=NULL;
    }
}

void display()
{
    struct node* temp=head;
    while(temp!=NULL)
    {
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}

int main()
{
    insertNode(34);
    insertNode(45);
    insertNode(56);
    insertNode(67);
    display();
    reverse();
    printf("Reversed linked list(using iteration):\n");
    display();
    printf("Reversed linked list(using recursion):\n");
    display();
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
//print linked list using recursion
struct node {
    int data;
    struct node* next;
};
struct node* head = NULL;

void insert(int x)
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

void print(struct node* head)
{
    if(head==NULL) return;
    printf("%d -> ", head->data);
    print(head->next);
}

int main()
{
    insert(34);
    insert(45);
    insert(56);
    insert(67);
    printf("Print linked list(using recursion):\n");
    print(head);
    printf("NULL\n");
    return 0;
}
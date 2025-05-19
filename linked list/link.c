#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* link;
};
struct Node* head=NULL;
void insertNode(int x)
{
    struct Node* new=(struct Node*)malloc(sizeof(struct Node*));
    struct Node* temp=head;
    new->data=x;
    if(head==NULL)
    {
        new->link=head;
        head=new;
        head->link=NULL;
    }
    else
    {
        while(temp->link!=NULL)
        {
            temp=temp->link;
        }
        temp->link=new;
        new->link=NULL;
    }
}
void display()
{
    struct Node* temp=head;
    while(temp!=NULL)
    {
        printf("%d -> ",temp->data);
        temp=temp->link;
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
    return 0;
}
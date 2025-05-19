#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* link;
};
struct Node* top=NULL;
void push(int x)
{
    struct Node* new=(struct Node*)malloc(sizeof(struct Node*));
    new->data=x;
    new->link=top;
    top=new;
}
void pop()
{
    struct Node* del;
    if(top==NULL)
    {
        printf("STACK UNDERFLOW\n");
        exit(0);
    }
    printf("element popped %d ",top->data);
    del=top;
    top=top->link;
    free(del);
}
void display()
{
    printf("FROM TOP TO BOTTOM!!!\n");
    if(top==NULL){
        printf("STACK UNDERFLOW\n");
    }
    struct Node* temp=top;
    printf("The STACK is:  \n");
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        printf("\n");
        printf("^\n|\n");
        temp=temp->link;
    }
    printf("NULL\n");
}

int main()
{
    int choice,x;
    printf("STACK IMPLEMENTATION USING LINKED LIST\n");
    while(1)
    {
        printf("1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
        printf("Enter your choice:  ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                printf("Enter element to PUSH::  ");
                scanf("%d",&x);
                push(x);
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                exit(0);
            }
            default:
            printf("\n !!!WRONG CHOICE!!!\n");
        }
    }
    return 0;
}
#include<stdio.h>
#include<stdio.h>

struct node{
    int data;
    struct node* next;
};
struct node* head=NULL;
//delete the last node of the linked list
int del()
{
    if(head==NULL)
    {
        printf("List is empty\n");
        return -1;
    }
    struct node* temp=head;
    struct node* prev=NULL;
    while(temp->next!=NULL)
    {
        prev=temp;
        temp=temp->next;
    }
    if(prev==NULL) //only one node in the list
    {
        head=NULL;
    }
    else
    {
        prev->next=NULL;
    }
    free(temp);
}

//delete node at nth position
int delnode(int n)
{
    if(head==NULL)
    {
        printf("List is empty\n");
        return -1;
    }
    struct node* temp=head;
    struct node* prev=NULL;
    while(temp->next!=NULL)
    {
        temp=temp->next;   //temp stores the element of the n-1th node
    }
    //temp->next stores the the address of the nth node 
    prev=temp->next;
    temp->next=prev->next; //temp->next stores the address of the n+1th node
    free(prev);
}

//delete all nodes 
void delall()
{
    struct node* temp=head;
    struct node* temp1=NULL;
    while(temp!=NULL)
    {
        temp1=temp->next;
        free(temp);
        temp=temp1;
    }
    head=NULL;
}

//delete every 2nd element from list
void del2nd()
{
    if(head==NULL)
    {
        printf("List is empty\n");
        return;
    }
    struct node* temp=head;
    struct node* prev=NULL;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        if(count%2==0) //delete every 2nd element
        {
            if(prev==NULL) //if the first element is to be deleted
            {
                head=temp->next;
                free(temp);
                temp=head; //move to the next element
            }
            else
            {
                prev->next=temp->next;
                free(temp);
                temp=prev->next; //move to the next element
            }
        }
        else
        {
            prev=temp; //update previous node
            temp=temp->next; //move to the next node
        }
    }
}
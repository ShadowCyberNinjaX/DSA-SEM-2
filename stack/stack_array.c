#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int top=-1;
int a[MAX];
void push(int x)
{
    if(top==MAX-1)
    {
        printf("Stack OVERFLOW!!!\n");
    }
    a[++top]=x;
}

void pop()
{
    if(top==-1)
    {
        printf("Stack UNDERFLOW!!!\n");
    }
    else
    {
        
        top--;
    }
}

void display()
{
    if(top==-1)
    {
        printf("Stack UNDERFLOW!!!\n");
    }
    else
    {
        for (int i=top;i>=0;i--)
        {
            printf("%d",a[i]);
            printf("\n");
        }
    }
}

int main()
{
    int choice,x;
    printf("STACK USING ARRAY\n");
    while(1)
    {
        printf("1. TO PUSH\n2. TO POP\n3. TO DISPLAY\n4. TO EXIT\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                printf("Enter an element to push: ");
                scanf("%d",&x);
                push(x);
                break;
            }
            case 2:
            {
                pop();
                printf("Element Poped...\n");
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
        }
    }
    return 0;
}
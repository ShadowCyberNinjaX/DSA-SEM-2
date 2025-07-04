#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,pos,val,i;
    printf("enter the no. of elements to be added: ");
    scanf("%d",&n);
    int* arr=(int*)malloc(n*sizeof(int));
    printf("enter the elemnts: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("the array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("enter the position to be inserted:");
    scanf("%d",&pos);
    printf("enter the value to be inserted:");
    scanf("%d",&val);
    if(pos<0||pos>n)
    {
        printf("invalid position\n");
    }
    else
    {
        arr=(int*)realloc(arr, (n+1)*sizeof(int));
        for(i=n;i>pos;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[pos]=val;
        printf("the array after insertion is:\n");
        for(i=0;i<=n;i++)
        {
            printf("%d ",arr[i]);
        }
    }
    free(arr);
    return 0;
}
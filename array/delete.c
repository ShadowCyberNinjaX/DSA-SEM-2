#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,pos;
    printf("enter the size of array: ");
    scanf("%d",&n);
    int* arr=(int*)malloc(n*sizeof(int));
    printf("enter the elements of the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the position of element to delete: ");
    scanf("%d",&pos);
    if(pos<0||pos>=n)
    {
        printf("invalid position");
    }
    else
    {
        for(i=pos;i<n-1;i++)
        {
            arr[i]=arr[i+1];
        }
        arr=(int*)realloc(arr,(n-1)*sizeof(int));
    
    }
    printf("the elements of the array after deletion are: ");
    for(i=0;i<n-1;i++)
    {
        printf("%d ",arr[i]);
    }
    free(arr);
    return 0;
}
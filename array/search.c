#include<stdio.h>
#include<stdlib.h>
int search(int* arr,int n,int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            printf("Element %d is found at index %d\n",key,i);
            return 1;
        }
    }
    return 0;
}

int main()
{
    int n,key,i;
    printf("enter the size of the array: ");
    scanf("%d",&n);
    int* arr=(int*)malloc(n*sizeof(int));
    printf("enter the elements of the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the element to be searched:");
    scanf("%d",&key);
    if(search(arr,n,key))
    {}
    else
    {
        printf("Element %d not found in the array\n", key);
    }
    free(arr);
    return 0;
}
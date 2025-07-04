#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a;
    int size,key,pos=0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    a=(int *)malloc(size * sizeof(int));
    printf("Enter the elements of the array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the key:  ");
    scanf("%d",&key);
    while((pos<size) && (a[pos]!=key))
    {
        pos++;
    }
    if(pos<size)
    {
        printf("Element found at position %d\n", pos);
    }
    else
    {
        printf("Element not found!!!\n");
    }
    return 0;
}
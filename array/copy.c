#include<stdio.h>
#include<stdlib.h>

int copy(int* a,int* b,int n)
{
    for(int i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    printf("Array copied successfully.\n");
    return 0;
}
int main()
{
    int i,n;
    printf("enter th size of array:");
    scanf("%d",&n);
    int *a = (int *)malloc(n * sizeof(int));
    int *b = (int *)malloc(n * sizeof(int));
    printf("enter the element of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    copy(a,b,n);
    printf("the copied elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d",b[i]);
    }
    printf("\n");
    free(a);
    free(b);
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
int reverse(int* arr, int n)
{
    int i,j,temp;
    for(i=0,j=n-1;i<j;i++,j--)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return 0;
}

int main()
{
    int n,i;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int* arr=(int*)malloc(n*sizeof(int));
    printf("enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    reverse(arr,n);
    printf("Reversed array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    free(arr);
    return 0;
}
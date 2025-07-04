#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,max,min;
    printf("enter the size of the array:");
        scanf("%d",&n);
    int* arr=(int*)malloc(n*sizeof(int));
    printf("enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("Maximum element in the array is: %d\n", max);
    printf("Minimum element in the array is: %d\n", min);
    free(arr);
    return 0;
}
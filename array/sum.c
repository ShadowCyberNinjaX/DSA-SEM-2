#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,even=0,odd=0;
    printf("enter the size of array:");
    scanf("%d",&n);
    int* arr=(int*)malloc(n*sizeof(int));
    printf("enter the elements of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even+= arr[i];
        }
        else
        {
            odd+=arr[i];
        }
    }
    printf("sum of even numbers is %d and odd numbers is %d\n",even,odd);
    free(arr);
    return 0;
}
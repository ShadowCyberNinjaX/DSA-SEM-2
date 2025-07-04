#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,count;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int *a = (int *)malloc(n * sizeof(int));
    int* freq = (int *)malloc(n * sizeof(int));
    printf("enter the elements of the array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        freq[i] = -1;
    }
    for(i=0;i<n;i++)
    {
        count=1;
        if(freq[i]!=0)
        {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                freq[j]=0; // Mark as counted
            }
        }
        freq[i]=count;
        }
    }
    printf("Frequency of elements:\n");
    for(i=0;i<n;i++)
    {
        if(freq[i]!=0)
        {
            printf("%d occurs %d times\n",a[i],freq[i]);
        }
    }
    free(a);
    free(freq);
    return 0;
}
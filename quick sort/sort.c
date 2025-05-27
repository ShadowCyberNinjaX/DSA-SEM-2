#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int median3(int a[],int left,int right)
{
    int center=(left+right)/2;
    if(a[center]<a[left])
        swap(&a[left],&a[center]);
    if(a[right]<a[left])
        swap(&a[left],&a[right]);
    if(a[right]<a[center])
        swap(&a[center],&a[right]);
    swap(&a[center],&a[right-1]);
    return a[right-1];
}

int quicksort(int a[],int left,int right)
{
    if (left + 10<=right)
    {
        int pivot=median3(a,left,right);
        //begin partitioning
        int i=left,j=right-1;
        for(;;)
        {
            while(a[++i]<pivot);
            while(a[--j]>pivot);
            if(i<j)
                swap(&a[i],&a[j]);
            else
                break;
        }
        swap(&a[i],&a[right-1]);
        quicksort(a,left,i-1);
        quicksort(a,i+1,right);
    }
   /* else
    {
        insertsort(a,left,right);
    }*/
}

//int insertsort(int a[],int left,int right)


int main()
{
    int a[] = {3, 6, 8, 10, 1, 2, 1, 5, 7, 4, 9};
    int n = sizeof(a) / sizeof(a[0]);
    
    quicksort(a, 0, n - 1);
    
    printf("Sorted array: \n");
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    
    return 0;
}
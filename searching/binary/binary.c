#include<stdio.h>
#include<stdlib.h>
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        // Last i elements are already in place
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void binarysearch(int* arr,int n,int key)
{
    bubbleSort(arr, n);
    printf("the array is sorted.\n");
    int low = 0, high = n - 1, mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            printf("Element found at index %d\n", mid);
            return;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    printf("Element not found in the array\n");
}
int main()
{
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int *arr =(int*)malloc(n*sizeof(int*));
    printf("enter the elements of array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("the elements of array are:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("enter the element to be searched:");
    int key;
    scanf("%d",&key);
    printf("BINARY SEARCH:\n");
    binarysearch(arr, n, key);
    free(arr);
    return 0;
}
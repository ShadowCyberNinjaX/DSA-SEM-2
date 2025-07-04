#include<stdio.h>
void intmatrix(int a[10][10],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}

void printmatrix(int a[10][10],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

int uppertriangle(int a[10][10],int n)
{
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<i;j++)
        {
            if(a[i][j]!=0)
            {
                return 0; // Not upper triangular
            }
        }
    }
    return 1; // Upper triangular
}

int main()
{
    int a[10][10],n;
    printf("enter the size of the matrix:\n");
    scanf("%d",&n);
    printf("Enter the elements of the matrix:\n");
    intmatrix(a,n);
    printf("The matrix is:\n");
    printmatrix(a,n);
    if(uppertriangle(a,n)==0)
    {
        printf("The matrix is not upper triangular\n");
    }
    else
    {
        printf("The matrix is upper triangular\n");
    }
    return 0;
}
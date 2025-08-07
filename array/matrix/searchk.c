#include<stdio.h>
#include<stdlib.h>
int** allotematrix(int r,int c)
{
    int** matrix=(int**)malloc(r*sizeof(int*));
    for(int i=0;i<r;i++)
    {
        matrix[i]=(int*)malloc(c*sizeof(int));
    }
    return matrix;
}
void intmatrix(int** a,int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
void printmatrix(int** a,int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
int search(int** a,int r,int c,int key)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]==key)
            {
                return 1;
            }
        }
    }
    return 0;
}
void freematrix(int** a,int r)
{
    for(int i=0;i<r;i++)
    {
        free(a[i]);
    }
    free(a);
}
int main()
{
    int key,i,j,r,c;
    printf("enter the rows and columns of the matrix:");
    scanf("%d %d",&r,&c);
    int** a=allotematrix(r,c);
    printf("enter the elements of the matrix:");
    intmatrix(a,r,c);
    printf("The matrix is:\n");
    printmatrix(a,r,c);
    printf("Enter the element to search: ");
    scanf("%d", &key);
    if(search(a, r, c, key))
    {
        printf("Element %d found in the matrix.\n", key);
    }
    else
    {
        printf("Element %d not found in the matrix.\n", key);
    }

    freematrix(a, r);
    return 0;
}
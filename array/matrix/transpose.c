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
void transpose(int** a,int** b,int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           b[j][i]=a[i][j]; 
        }
    }
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
    int r,c;
    printf("enter the rows and colomn of matrix:");
    scanf("%d %d",&r,&c);
    int** a=allotematrix(r,c);
    int** b=allotematrix(r,c);
    printf("enter the elements of the matrix:");
    intmatrix(a,r,c);
    printf("the matrix is:\n");
    printmatrix(a,r,c);
    printf("the transpose matrix is:\n");
    transpose(a,b,r,c);
    printmatrix(b,r,c);
    freematrix(a,r);
    freematrix(b,r);
    return 0;
}
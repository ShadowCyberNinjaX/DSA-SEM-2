#include<stdio.h>
#include<conio.h>

int fibbonacci_recursion(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibbonacci_recursion(n - 1) + fibbonacci_recursion(n - 2);
}
int main()
{
    int n;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    printf("Fibonnacci series is:\n");
    printf("%d\t",fibbonacci_recursion(n));
    return 0;
}
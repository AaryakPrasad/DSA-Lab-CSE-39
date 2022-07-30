#include <stdio.h>
#include <stdlib.h>
int nonzero(int **a, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j]!= 0)
            {
                count++;
            }
        }
    }
    return count;
}

int maindiagonaladd(int **a, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j>i)
            {
                sum+=a[i][j];
            }
        }
    }
    return sum;
}

int minordiagonaladd(int **a, int n)
{
    int sum = 0;
    int k = n-2;
    for (int i = 1; i <n;i++)
    {
        for (int j = n-1; j > k;j--)
        {
            sum = sum + a[i][j];
        }
        k--;
    }
    return sum;
}
int product(int **a, int n)
{
    int product = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i==j)
                product  *= a[i][j];
            else if ((i+j)==(n-1))
                product  *= a[i][j];
        }
    }
    return product;
}
int main()
{
    int n;
    printf("Enter the number of rows and columns: ");
    scanf("%d", &n);
    int *arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = (int *)malloc(n * sizeof(int));
    }
    printf("Enter the array: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nThe array is: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\nThe number of nonzero elements is: %d",nonzero(arr,n));
    printf("\nThe sum of the elements above the main diagonal is: %d",maindiagonaladd(arr,n));
    printf("\nThe sum of the elements below the minor diagonal is: %d",minordiagonaladd(arr,n));
    printf("\nThe product of the elements in both the diagonals is: %d",product(arr,n));
    for (int i = 0; i < n; i++)
    {
        free(arr[i]);
    }
    return 0;
}
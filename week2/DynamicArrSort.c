#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *a;
    int n,i,j,temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    a= (int *)malloc(n * sizeof(int));
    printf("Enter the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i=0;i<n-1;i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }   
        }
    }
    printf("\nThe array now looks like:");
    for (i = 0; i < n; i++)
        printf("\n%d",a[i]);
    free(a);
    return 0;
}
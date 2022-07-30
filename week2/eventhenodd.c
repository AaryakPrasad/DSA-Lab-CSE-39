#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *a,n,j=-1,temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    a= (int *)malloc(n * sizeof(int));
    printf("Enter the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i]%2==0)
        {
            j++;
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    printf("\nThe array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    free(a);
    return 0;
}
    
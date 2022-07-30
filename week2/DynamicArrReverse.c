#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *a;
    int n,i,j,temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    a = (int *)malloc(n * sizeof(int));
    printf("Enter the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    i=0;
    j=n-1;
    while (i<j)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    printf("The array now looks like:");
    for (i = 0; i < n; i++)
        printf("\n%d",a[i]);
    free(a);
    return 0;
}
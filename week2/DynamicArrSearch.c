#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *a;
    int n,x;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    a= (int *)malloc(n * sizeof(int));
    printf("Enter the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        if (a[i]==x)
        {
            printf("The element is found at position %d",i+1);
            break;
        }
    }
    free(a);
    return 0;
}
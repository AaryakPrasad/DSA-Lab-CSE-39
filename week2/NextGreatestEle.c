#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *a,n,def;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    a= (int *)malloc(n * sizeof(int));
    printf("Enter the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Element     NGE\n");
    for (int i = 0; i < n; i++)
    {
        def=-1;
        for (int j = i+1; j < n; j++)
        {
            if (a[i]<a[j])
            {
                def=a[j];
                break;
            }
        }
        printf("%d          %d\n",a[i],def);
    }
    free(a);
    return 0;
}
    
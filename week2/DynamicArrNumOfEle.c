#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *arr;
    int n,a,b,count=0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    arr= (int *)malloc(n * sizeof(int));
    printf("Enter the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the starting element:");
    scanf("%d", &a);
    printf("Enter the ending element:");
    scanf("%d", &b);
    int i=0,j=0;
    for(i=0;i<n;i++)
        if (arr[i]==a)
            break;
    for (j = n-1; j>=i+1 ; j--)
        if (arr[j]==b)
            break;
    count=j-i+1;
    
    printf("\nThe number of elements between %d and %d is %d.",a,b,count);
    printf("\nThe elements are:");
    for(int k=i;k<=j;k++)
        printf("\n%d",arr[k]);
    free(arr);
    return 0;
}
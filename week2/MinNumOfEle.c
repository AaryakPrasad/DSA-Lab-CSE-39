#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *arr;
    int n,a,b,i,j;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int k=n;
    arr= (int *)malloc(n * sizeof(int));
    printf("Enter the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the first element:");
    scanf("%d", &a);
    printf("Enter the last element:");
    scanf("%d", &b);
    for (i = 0; i < n; i++) 
    { 
        for (j = i+1; j < n; j++) 
        { 
            if( (a == arr[i] && b == arr[j] || b == arr[i] && a == arr[j]) && k > abs(i-j)) 
            { 
                k = abs(i-j); 
            } 
        } 
    } 
    
    printf("\nThe number of elements between %d and %d is %d.",a,b,k);
    free(arr);
    return 0;
}
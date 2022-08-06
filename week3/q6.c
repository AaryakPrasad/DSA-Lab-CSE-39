#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, i, j;

    printf("Enter order of magic square (order must be odd): ");
    scanf("%d", &n);

    if(n%2==0)
    {
        printf("Order must be odd.\n");
        return 0;
    }
    int a[n][n];
    int k=0,m=n;
    
    while (1)
    {
        for(i=0; i<n*n; i++)
            if (m+k>m)
                m==0;
            a[m+k][(m/2)+1+k] = i;
            k++;

    }

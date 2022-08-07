#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, j, k, p, q, mid, magic[20][20];

    printf("Enter the odd order of magic square: ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("n must be odd.\n");
        exit(0);
    }

    mid = n / 2;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            magic[i][j] = 0;
        }
    }

    k = mid;
    j = n - 1;
    for (i = 1; i <= n * n; i++)
    {
        magic[j][k] = i;
        p = j++;
        q = k--;
        if ((j == n) && (k == -1))
        {
            j = n - 2;
            k = 0;
        }

        if (j == n)
        {
            j = 0;
        }
        if (k < 0)
        {
            k = n - 1;
        }
        if (magic[j][k] != 0)
        {
            j = j - 2;
            k++;
        }
    }

    printf("MAGIC SQUARE is:\n");
    printf("\n");
    for (j = 0; j < n; j++)
        for (k = 0; k < n; k++)
            printf("%d\t", magic[j][k]);
        printf("\n");
    return 0;
}
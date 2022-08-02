#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,n,m,o,p,sum;
    printf("Enter the number of rows of the first matrix:");
    scanf("%d",&m);
    printf("Enter the number of columns of the first matrix:");
    scanf("%d",&n);
    printf("Enter the number of rows of the second matrix:");
    scanf("%d",&o);
    printf("Enter the number of columns of the second matrix:");
    scanf("%d",&p);
    int a[m][n],b[o][p],c[n][p];
    if (n!=o)
        printf("Multiplication is not possible.");
    else
        printf("Enter values into the first matrix:");
        for (i = 0; i < n; i++)
            for (j = 0; j < m; j++)
            {
                printf("\nEnter a [%d][%d] element:",i,j);
                scanf("%d",&a[i][j]);
            }
        
        printf("Enter values into the second matrix:");
        for (i = 0; i < o; i++)
            for (j = 0; j < p; j++)
            {
                printf("\nEnter a [%d][%d] element:",i,j);
                scanf("%d",&b[i][j]);
            }
        printf("The first matrix is:\n");
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
                printf("%d\t",a[i][j]);
            printf("\n");
        }
        printf("The second matrix is:\n");
        for (i = 0; i < o; i++)
        {
            for (j = 0; j < p; j++)
                printf("%d\t",b[i][j]);
            printf("\n");
        }

        for (i = 0; i < m; i++)
            for (j = 0; j < p; j++)
            {
                sum=0;
                for (k = 0; k < n; k++)
                    sum+=a[i][k]*b[k][j];
                c[i][j]=sum;
            }
    
    printf("The multiplied matrix is:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            printf("%d\t",c[i][j]);
        printf("\n");
    }
    return 0;
}        
        
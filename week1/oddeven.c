#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (((n/2)*2)==n)
        printf("The number is even\n");
    else
        printf("The number is odd\n");
    return 0;
}
    
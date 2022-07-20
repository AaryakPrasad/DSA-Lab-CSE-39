#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if ((n|1)==n)
        printf("The number is odd\n");
    else
        printf("The number is even\n");
    return 0;
}
    
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if ((n^1)==(n+1))
        printf("The number is even\n");
    else
        printf("The number is odd\n");
    return 0;
}
    
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Content of first byte block is:%d\n",(n>>24)&255);
    printf("Content of second byte block is:%d\n",(n>>16)&255);
    printf("Content of third byte block is:%d\n",(n>>8)&255);
    printf("Content of fourth byte block is:%d\n",n&255);
    return 0;
}
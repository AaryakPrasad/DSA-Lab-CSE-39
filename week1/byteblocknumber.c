#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,c,d,num;
    printf("Enter the content of first byte block: ");
    scanf("%d", &a);
    printf("Enter the content of second byte block: ");
    scanf("%d", &b);
    printf("Enter the content of third byte block: ");
    scanf("%d", &c);
    printf("Enter the content of fourth byte block: ");
    scanf("%d", &d);
    num=(a<<24)+(b<<16)+(c<<8)+d;
    printf("The number is: %d\n",num);
    return 0;
}
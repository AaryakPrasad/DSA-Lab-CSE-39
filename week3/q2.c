#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    struct train
    {
        char name[20];
        int hour;
        int minute;
        int second;
        char am_pm[2];
    };
    struct train t[2];
    for (int i = 0; i < 2; i++)
    {
        printf("\nEnter name: ");
        scanf(" %[^\n]", t[i].name);
        printf("Enter hour: ");
        scanf("%d", &t[i].hour);
        printf("Enter minute: ");
        scanf("%d", &t[i].minute);
        printf("Enter second: ");
        scanf("%d", &t[i].second);
        printf("Enter am or pm: ");
        scanf(" %[^\n]", t[i].am_pm);
    }
    for (int i=0;i<2;i++)
        if (strcmp(t[i].am_pm,"pm")==0)
            t[i].hour+=12;
    printf("\nThe Schedule is:\n");
    printf("Name\t\tTime");
    for (int i = 0; i < 2; i++)
    {
        printf("\n%s\t\t%d:%d:%d hours", t[i].name, t[i].hour, t[i].minute, t[i].second);
    }
    return 0;
}
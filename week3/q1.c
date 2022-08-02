#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    struct people 
    {
        char name[20];
        int age;
        char city[20];
    };
    
    struct people p[5];
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter name: ");
        scanf(" %[^\n]", p[i].name);
        printf("Enter age: ");
        scanf("%d", &p[i].age);
        printf("Enter city: ");
        scanf(" %[^\n]", p[i].city);
    }
    int max = p[0].age;
    for (int i=0;i<5;i++)
        if (p[i].age < p[i+1].age) 
            max=i+1;
    printf("\nThe oldest person is %s of age %d and lives in %s\n", p[max].name, p[max].age, p[max].city);
}
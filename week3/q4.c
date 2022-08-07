#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct date
{
    int day,month,year;
};
struct employee
{
    char name[20],city[20];
    int age,salary;
    struct date dob, doj;
};
void sort_name(struct employee *e,int n)
{
    struct employee temp;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n-i-1; j++)
            if (strcmp(e[j].name, e[j + 1].name) > 0)
            {
                temp=e[j];
                e[j]=e[j+1];
                e[j+1]=temp;
            }
    printf("\nThe list of employees sorted by name looks like:\n");
    printf("Name\tAge\tSalary\tDate of Birth\tDate of Joining\tCity\n");
    for (int i = 0; i < n; i++)
        printf("%s\t%d\t%d\t%d/%d/%d\t%d/%d/%d\t%s\n", e[i].name, e[i].age, e[i].salary, e[i].dob.day, e[i].dob.month, e[i].dob.year, e[i].doj.day, e[i].doj.month, e[i].doj.year, e[i].city);
}
void sort_dob(struct employee *e,int n)
{
    struct employee temp;
    int flag=0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n-i-1; j++)
        {
            if (e[j].dob.year>e[j+1].dob.year)
                flag=1;
            else if (e[j].dob.month>e[j+1].dob.month && e[j].dob.year==e[j+1].dob.year)
                flag=1;
            else if (e[j].dob.day>e[j+1].dob.day && e[j].dob.month==e[j+1].dob.month && e[j].dob.year==e[j+1].dob.year)
                flag=1;

            if (flag==1)
            {
                temp=e[j];
                e[j]=e[j+1];
                e[j+1]=temp;
            }
            flag = 0; 
        }
    printf("\nThe list of employees sorted by date of birth looks like:\n");
    printf("Name\tAge\tSalary\tDate of Birth\tDate of Joining\tCity\n");
    for (int i = 0; i < n; i++)
        printf("%s\t%d\t%d\t%d/%d/%d\t%d/%d/%d\t%s\n", e[i].name, e[i].age, e[i].salary, e[i].dob.day, e[i].dob.month, e[i].dob.year, e[i].doj.day, e[i].doj.month, e[i].doj.year, e[i].city);
}
void sort_doj(struct employee *e,int n)
{
    struct employee temp;
    int flag=0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n-i-1; j++)
        {
            if (e[j].doj.year>e[j+1].doj.year)
                flag=1;
            else if (e[j].doj.month>e[j+1].doj.month && e[j].doj.year==e[j+1].doj.year)
                flag=1;
            else if (e[j].doj.day>e[j+1].doj.day && e[j].doj.month==e[j+1].doj.month && e[j].doj.year==e[j+1].doj.year)
                flag=1;  

            if (flag==1)
            {
                temp=e[j];
                e[j]=e[j+1];
                e[j+1]=temp;
            }
        }
    printf("\nThe list of employees sorted by date of joining looks like:\n");
    printf("Name\tAge\tSalary\tDate of Birth\tDate of Joining\tCity\n");
    for (int i = 0; i < n; i++)
        printf("%s\t%d\t%d\t%d/%d/%d\t%d/%d/%d\t%s\n", e[i].name, e[i].age, e[i].salary, e[i].dob.day, e[i].dob.month, e[i].dob.year, e[i].doj.day, e[i].doj.month, e[i].doj.year, e[i].city);
}
void sort_salary(struct employee *e,int n)
{
    struct employee temp;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n-i-1; j++)
        {
            if (e[j].salary>e[j+1].salary)
            {
                temp=e[j];
                e[j]=e[j+1];
                e[j+1]=temp;
            }
        }
    printf("\nThe list of employees sorted by salary looks like:\n");
    printf("Name\tAge\tSalary\tDate of Birth\tDate of Joining\tCity\n");
    for (int i = 0; i < n; i++)
        printf("%s\t%d\t%d\t%d/%d/%d\t%d/%d/%d\t%s\n", e[i].name, e[i].age, e[i].salary, e[i].dob.day, e[i].dob.month, e[i].dob.year, e[i].doj.day, e[i].doj.month, e[i].doj.year, e[i].city);
}

int main()
{
int n;
printf("Enter the number of employees:");
scanf("%d", &n);
struct employee e[n];
for (int i = 0; i < n; i++)
{
    printf("\nEnter name: ");
    scanf(" %[^\n]", e[i].name);
    printf("Enter age: ");
    scanf("%d", &e[i].age);
    printf("Enter city: ");
    scanf(" %[^\n]", e[i].city);
    printf("Enter date of birth: ");
    scanf("%d %d %d", &e[i].dob.day, &e[i].dob.month, &e[i].dob.year);
    printf("Enter date of joining: ");
    scanf("%d %d %d", &e[i].doj.day, &e[i].doj.month, &e[i].doj.year);
    printf("Enter salary: ");
    scanf("%d", &e[i].salary);
}
printf("Select method to sort employees by:");
int choice;
printf("1. Name\n2. Date of birth\n3. Date of joining\n4. Salary\n");
printf("Enter your choice: \n");
scanf("%d", &choice);
switch(choice)
    {
        case 1:
            sort_name(e,n);
            break;
        case 2:
            sort_dob(e,n);
            break;
        case 3:
            sort_doj(e,n);
            break;
        case 4:
            sort_salary(e,n);
            break;
        default:
            printf("Invalid choice");
    }
return 0;
}
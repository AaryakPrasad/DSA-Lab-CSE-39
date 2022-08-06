#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct student
    {
        char name[20];
        int rollno;
        int marks[5];   
        int total;
        char grade;
    };
    int n;
    printf("Enter the number of students:");
    scanf("%d", &n);
    struct student s[n],temp;
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter name: ");
        scanf(" %[^\n]", s[i].name);
        printf("Enter rollno: ");
        scanf("%d", &s[i].rollno);
        printf("Enter marks: ");
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &s[i].marks[j]);
        }
        s[i].total = 0;
        for (int j = 0; j < 5; j++)
        {
            s[i].total += s[i].marks[j];
        }
        if (s[i].total >= 90*5)
            s[i].grade = 'O';
        else if (s[i].total >= 80*5)
            s[i].grade = 'E';
        else if (s[i].total >= 70*5)
            s[i].grade = 'A';
        else if (s[i].total >= 60*5)
            s[i].grade = 'B';
        else
            s[i].grade = 'C';
    }

    for (int i=0;i<n-1;i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (s[j].rollno>s[j+1].rollno)
            {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }   
        }
    }
    printf("\nThe list of students looks like:\n");
    printf("\nName\tRollno\tTotal\tGrade");
    for (int i = 0; i < n; i++)
        printf("\n%s\t%d\t%d\t%c", s[i].name, s[i].rollno, s[i].total, s[i].grade);
    return 0;
}
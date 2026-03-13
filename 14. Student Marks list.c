#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
    int id;
    char name[20];
    int total;
}s[50], temp;

void main()
{
    int n,i,j;

    clrscr();

    printf("Enter number of students: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter details of student %d\n",i+1);

        printf("Student ID: ");
        scanf("%d",&s[i].id);

        printf("Name: ");
        scanf("%s",s[i].name);

        printf("Total Marks: ");
        scanf("%d",&s[i].total);
    }

    /* Sorting students by total marks (descending) */
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(s[i].total < s[j].total)
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }

    printf("\nRank List\n");
    printf("Rank\tID\tName\tMarks\n");

    for(i=0;i<n;i++)
    {
        printf("%d\t%d\t%s\t%d\n",i+1,s[i].id,s[i].name,s[i].total);
    }

    getch();
}
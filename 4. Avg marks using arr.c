#include<stdio.h>

struct student
{
    char regno[20];
    char name[10];
    int m[3];
    int total;
} s[100];

void main()
{
    int n,i,j;
    float avg;

    printf("Enter the number of student: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter the details of student %d\n",i+1);

        printf("Enter the regno: ");
        scanf("%s",s[i].regno);

        printf("Enter the name: ");
        scanf("%s",s[i].name);

        s[i].total=0;

        printf("Enter the marks of 3 subjects:\n");
        for(j=0;j<3;j++)
        {
            scanf("%d",&s[i].m[j]);
            s[i].total = s[i].total + s[i].m[j];
        }
    }

    printf("\nregno\tname\tmarks1\tmarks2\tmarks3\ttotalmarks\taverage\n");

    for(i=0;i<n;i++)
    {
        avg = s[i].total/3.0;

        printf("%s\t%s\t",s[i].regno , s[i].name);

        for(j=0;j<3;j++)
        {
            printf("%d\t",s[i].m[j]);
        }

        printf("%d\t\t%.2f\n",s[i].total,avg);
    }
}
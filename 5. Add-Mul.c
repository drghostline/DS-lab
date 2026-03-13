#include<stdio.h>

void main()
{
    int a[10][10], b[10][10], c[10][10];
    int i,j,k,r1,c1,r2,c2,choice;

    printf("1. Addition\n2. Multiplication\n3. Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf("Enter rows and columns of Matrix A: ");
            scanf("%d%d",&r1,&c1);

            printf("Enter rows and columns of Matrix B: ");
            scanf("%d%d",&r2,&c2);

            if(r1==r2 && c1==c2)
            {
                printf("Enter elements of Matrix A:\n");
                for(i=0;i<r1;i++)
                    for(j=0;j<c1;j++)
                        scanf("%d",&a[i][j]);

                printf("Enter elements of Matrix B:\n");
                for(i=0;i<r2;i++)
                    for(j=0;j<c2;j++)
                        scanf("%d",&b[i][j]);

                printf("Addition of matrices:\n");
                for(i=0;i<r1;i++)
                {
                    for(j=0;j<c1;j++)
                    {
                        c[i][j]=a[i][j]+b[i][j];
                        printf("%d ",c[i][j]);
                    }
                    printf("\n");
                }
            }
            else
                printf("Addition not possible\n");
            break;

        case 2:
            printf("Enter rows and columns of Matrix A: ");
            scanf("%d%d",&r1,&c1);

            printf("Enter rows and columns of Matrix B: ");
            scanf("%d%d",&r2,&c2);

            if(c1==r2)
            {
                printf("Enter elements of Matrix A:\n");
                for(i=0;i<r1;i++)
                    for(j=0;j<c1;j++)
                        scanf("%d",&a[i][j]);

                printf("Enter elements of Matrix B:\n");
                for(i=0;i<r2;i++)
                    for(j=0;j<c2;j++)
                        scanf("%d",&b[i][j]);

                printf("Multiplication of matrices:\n");
                for(i=0;i<r1;i++)
                {
                    for(j=0;j<c2;j++)
                    {
                        c[i][j]=0;
                        for(k=0;k<c1;k++)
                            c[i][j]+=a[i][k]*b[k][j];

                        printf("%d ",c[i][j]);
                    }
                    printf("\n");
                }
            }
            else
                printf("Multiplication not possible\n");
            break;

        case 3:
            printf("Program exited\n");
            break;

        default:
            printf("Invalid choice\n");
    }
}
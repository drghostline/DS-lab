#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
    int *p,i,n;

    clrscr();

    printf("Enter number of elements: ");
    scanf("%d",&n);

    /* malloc allocation */
    p = (int*)malloc(n*sizeof(int));
    printf("\nMemory allocated using malloc\n");

    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&p[i]);

    printf("Elements are:\n");
    for(i=0;i<n;i++)
        printf("%d ",p[i]);

    /* calloc allocation */
    p = (int*)calloc(n,sizeof(int));
    printf("\n\nMemory allocated using calloc\n");

    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&p[i]);

    printf("Elements are:\n");
    for(i=0;i<n;i++)
        printf("%d ",p[i]);

    /* realloc allocation */
    printf("\n\nEnter new size: ");
    scanf("%d",&n);

    p = (int*)realloc(p,n*sizeof(int));
    printf("Memory reallocated using realloc\n");

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&p[i]);

    printf("Elements after realloc:\n");
    for(i=0;i<n;i++)
        printf("%d ",p[i]);

    /* free memory */
    free(p);
    printf("\n\nMemory freed using free");

    getch();
}
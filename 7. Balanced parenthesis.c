#include<stdio.h>
#include<conio.h>
#define MAX 100

char stack[MAX];
int top=-1;

void push(char x)
{
    stack[++top]=x;
}

char pop()
{
    return stack[top--];
}

void main()
{
    char exp[100];
    int i;

    clrscr();

    printf("Enter the expression: ");
    scanf("%s",exp);

    for(i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='(')
            push(exp[i]);

        else if(exp[i]==')')
        {
            if(top==-1)
            {
                printf("Expression is NOT Balanced");
                getch();
                return;
            }
            pop();
        }
    }

    if(top==-1)
        printf("Expression is Balanced");
    else
        printf("Expression is NOT Balanced");

    getch();
}
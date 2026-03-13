#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int stack[20];
int top = -1;

void push(int x)
{
    stack[++top] = x;
}

int pop()
{
    return stack[top--];
}

void main()
{
    char postfix[20];
    int i,a,b,result;

    clrscr();

    printf("Enter the postfix expression: ");
    scanf("%s", postfix);

    for(i=0; postfix[i] != '\0'; i++)
    {
        if(isdigit(postfix[i]))
        {
            push(postfix[i] - '0');
        }
        else
        {
            b = pop();
            a = pop();

            switch(postfix[i])
            {
                case '+': result = a + b;
                          break;

                case '-': result = a - b;
                          break;

                case '*': result = a * b;
                          break;

                case '/': result = a / b;
                          break;
            }

            push(result);
        }
    }

    printf("Result = %d", pop());

    getch();
}
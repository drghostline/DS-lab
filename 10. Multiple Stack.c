#include<stdio.h>
#include<conio.h>

#define MAX 10

int stack[MAX];
int top1 = -1;
int top2 = MAX;

void push1(int val)
{
    if(top1 < top2-1)
    {
        top1++;
        stack[top1] = val;
    }
    else
        printf("Stack Overflow\n");
}

void push2(int val)
{
    if(top1 < top2-1)
    {
        top2--;
        stack[top2] = val;
    }
    else
        printf("Stack Overflow\n");
}

void pop1()
{
    if(top1 >= 0)
    {
        printf("Popped from Stack1: %d\n",stack[top1]);
        top1--;
    }
    else
        printf("Stack1 Underflow\n");
}

void pop2()
{
    if(top2 < MAX)
    {
        printf("Popped from Stack2: %d\n",stack[top2]);
        top2++;
    }
    else
        printf("Stack2 Underflow\n");
}

void display1()
{
    int i;
    if(top1==-1)
        printf("Stack1 is Empty\n");
    else
    {
        printf("Stack1 Elements:\n");
        for(i=top1;i>=0;i--)
            printf("%d ",stack[i]);
    }
}

void display2()
{
    int i;
    if(top2==MAX)
        printf("Stack2 is Empty\n");
    else
    {
        printf("Stack2 Elements:\n");
        for(i=top2;i<MAX;i++)
            printf("%d ",stack[i]);
    }
}

void main()
{
    int choice,val;

    clrscr();

    do
    {
        printf("\n1.Push Stack1");
        printf("\n2.Push Stack2");
        printf("\n3.Pop Stack1");
        printf("\n4.Pop Stack2");
        printf("\n5.Display Stack1");
        printf("\n6.Display Stack2");
        printf("\n7.Exit");

        printf("\nEnter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter value: ");
                scanf("%d",&val);
                push1(val);
                break;

            case 2:
                printf("Enter value: ");
                scanf("%d",&val);
                push2(val);
                break;

            case 3:
                pop1();
                break;

            case 4:
                pop2();
                break;

            case 5:
                display1();
                break;

            case 6:
                display2();
                break;

            case 7:
                printf("Program Ended");
                break;

            default:
                printf("Invalid Choice");
        }

    }while(choice!=7);

    getch();
}
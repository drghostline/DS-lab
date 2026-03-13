#include<stdio.h>
#include<conio.h>

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue(int val)
{
    if(rear == MAX-1)
        printf("Queue Overflow\n");
    else
    {
        if(front == -1)
            front = 0;

        rear++;
        queue[rear] = val;
        printf("Inserted: %d\n",val);
    }
}

void dequeue()
{
    if(front == -1 || front > rear)
        printf("Queue Underflow\n");
    else
    {
        printf("Deleted: %d\n",queue[front]);
        front++;
    }
}

void display()
{
    int i;

    if(front == -1 || front > rear)
        printf("Queue is Empty\n");
    else
    {
        printf("Queue Elements:\n");
        for(i=front;i<=rear;i++)
            printf("%d ",queue[i]);
    }
}

void main()
{
    int choice,val;

    clrscr();

    do
    {
        printf("\n1.Enqueue");
        printf("\n2.Dequeue");
        printf("\n3.Display");
        printf("\n4.Exit");

        printf("\nEnter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter value: ");
                scanf("%d",&val);
                enqueue(val);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Program Ended\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    }while(choice!=4);

    getch();
}

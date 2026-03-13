#include<stdio.h>
#include<conio.h>

#define MAX 5

int deque[MAX];
int front = -1;
int rear = -1;

void insertFront(int val)
{
    if((front==0 && rear==MAX-1) || (front==rear+1))
    {
        printf("Deque Overflow\n");
        return;
    }

    if(front==-1)
    {
        front=rear=0;
    }
    else if(front==0)
    {
        front=MAX-1;
    }
    else
    {
        front--;
    }

    deque[front]=val;
}

void insertRear(int val)
{
    if((front==0 && rear==MAX-1) || (front==rear+1))
    {
        printf("Deque Overflow\n");
        return;
    }

    if(front==-1)
    {
        front=rear=0;
    }
    else if(rear==MAX-1)
    {
        rear=0;
    }
    else
    {
        rear++;
    }

    deque[rear]=val;
}

void deleteFront()
{
    if(front==-1)
    {
        printf("Deque Underflow\n");
        return;
    }

    printf("Deleted: %d\n",deque[front]);

    if(front==rear)
        front=rear=-1;
    else if(front==MAX-1)
        front=0;
    else
        front++;
}

void deleteRear()
{
    if(front==-1)
    {
        printf("Deque Underflow\n");
        return;
    }

    printf("Deleted: %d\n",deque[rear]);

    if(front==rear)
        front=rear=-1;
    else if(rear==0)
        rear=MAX-1;
    else
        rear--;
}

void display()
{
    int i;

    if(front==-1)
    {
        printf("Deque is Empty\n");
        return;
    }

    printf("Deque Elements:\n");

    i=front;
    while(i!=rear)
    {
        printf("%d ",deque[i]);
        i=(i+1)%MAX;
    }
    printf("%d ",deque[rear]);
}

void main()
{
    int choice,val;

    clrscr();

    do
    {
        printf("\n1.Insert Front");
        printf("\n2.Insert Rear");
        printf("\n3.Delete Front");
        printf("\n4.Delete Rear");
        printf("\n5.Display");
        printf("\n6.Exit");

        printf("\nEnter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter value: ");
                scanf("%d",&val);
                insertFront(val);
                break;

            case 2:
                printf("Enter value: ");
                scanf("%d",&val);
                insertRear(val);
                break;

            case 3:
                deleteFront();
                break;

            case 4:
                deleteRear();
                break;

            case 5:
                display();
                break;

            case 6:
                printf("Program Ended\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    }while(choice!=6);

    getch();
}

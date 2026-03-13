#include<stdio.h>
#include<conio.h>

#define MAX 5

struct student
{
    int regno;
    char course[20];
    int year;
};

struct student cq[MAX];

int front = -1;
int rear = -1;

void enqueue()
{
    if((front==0 && rear==MAX-1) || (rear+1==front))
    {
        printf("Queue Overflow\n");
        return;
    }

    if(front==-1)
        front=0;

    rear=(rear+1)%MAX;

    printf("Enter Registration Number: ");
    scanf("%d",&cq[rear].regno);

    printf("Enter Course Title: ");
    scanf("%s",cq[rear].course);

    printf("Enter Year: ");
    scanf("%d",&cq[rear].year);
}

void dequeue()
{
    if(front==-1)
    {
        printf("Queue Underflow\n");
        return;
    }

    printf("Deleted Student Record:\n");
    printf("RegNo: %d Course: %s Year: %d\n",
    cq[front].regno,cq[front].course,cq[front].year);

    if(front==rear)
        front=rear=-1;
    else
        front=(front+1)%MAX;
}

void display()
{
    int i;

    if(front==-1)
    {
        printf("Queue is Empty\n");
        return;
    }

    i=front;

    printf("\nStudent Records:\n");

    while(i!=rear)
    {
        printf("RegNo:%d Course:%s Year:%d\n",
        cq[i].regno,cq[i].course,cq[i].year);

        i=(i+1)%MAX;
    }

    printf("RegNo:%d Course:%s Year:%d\n",
    cq[rear].regno,cq[rear].course,cq[rear].year);
}

void main()
{
    int choice;

    clrscr();

    do
    {
        printf("\n1.Enqueue Student");
        printf("\n2.Dequeue Student");
        printf("\n3.Display Students");
        printf("\n4.Exit");

        printf("\nEnter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                enqueue();
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
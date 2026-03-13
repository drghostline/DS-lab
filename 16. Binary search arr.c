#include<stdio.h>
#include<conio.h>

void main()
{
    int a[50], n, i, item;
    int low, high, mid, found=0;

    clrscr();

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter %d sorted elements:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter element to search: ");
    scanf("%d",&item);

    low = 0;
    high = n-1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == item)
        {
            printf("Element found at position %d",mid+1);
            found = 1;
            break;
        }
        else if(item < a[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    if(found == 0)
        printf("Element not found");

    getch();
}
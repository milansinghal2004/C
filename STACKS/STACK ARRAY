#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#define max 5 // max = 5; and use max everywhere
int top = -1;
int stack[max];
void push(int n)
{
    if (top >= max - 1)
    {
        printf("Overflow\n");
    }
    else
    {
        top += 1;
        stack[top] = n;
    }
}
void pop()
{
    if (top == -1)
    {
        printf("Underflow\n");
    }
    else
    {
        printf("You have deleted %d.\n", stack[top]);
        top -= 1;
    }
}
void _print()
{
    int x = top;
    if (top == -1)
    {
        printf("Underflow\n");
    }
    else
    {
        int i;
        for (i = x; i >= 0; i--)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}
void _peek()
{
    int x = top;
    printf("your top most value is %d.\n", stack[x]);
}
int main()
{
    int choice;
    int x = 1, data;
    while (x == 1)
    {
        printf("Choose any one\npress 1 to incert\npress 2 to delete\npress 3 to travers\npress 4 to peek\npress 5 to exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the data: ");
            scanf("%d", &data);
            push(data);
            break;
        case 2:
            pop();
            break;
        case 3:
            _print();
            break;
        case 4:
            _peek();
            break;
        case 5:
            x = 0;
            break;
        default:
            printf("Invalid input\n");
        }
    }
}

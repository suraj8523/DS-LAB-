/* Write a menu-based program to implement linear queue operations: INSERTION,
DELETION using array implementation of queue */
#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
#define size 10
int enqueue();
int dequeue();
int show();
int Rear = -1;
int Front = -1;
int arr[size];
int main()
{
    while (1)
    {
        int choice;
        printf("Press 1 for insert in queue\n");
        printf("Press 2 for delete in queue\n");
        printf("Press 3 for show the data in queue\n");
        printf("Press any key for exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            show();
            break;

        default:
            exit(0);
        }
    }

    return 0;
}
int enqueue()
{
    int data;
    if (Rear == size - 1)
    {
        printf("Queue is full\n");
    }

    else
    {
        if (Front == -1)
        {
            Front = 0;
        }

        printf("Enter the data in queue\t");
        scanf("%d", &data);
        Rear = Rear + 1;
        arr[Rear] = data;
    }
}
int dequeue()
{
    if ((Front == Rear) == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        Front = Front + 1;
    }
}
int show()
{
    if (Front == -1)
    {
        printf("Queue is empty\n");
    }
    else
        for (int i = Front; i <= Rear; i++)
        {
            printf("%d", arr[i]);
        }
    printf("\n");
}
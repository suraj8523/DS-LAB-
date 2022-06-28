/*. Write a menu-based program to implement linear queue operations: INSERTION,
DELETION using linked list implementation of queue */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *next;
};
struct node *front = 0;
struct node *rear = 0;
struct node *newNode;
int enqueue(int x)
{
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->info = x;
    newNode->next = NULL;
    if (front == NULL && rear == NULL)
    {
        front = newNode;
        rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
}
void dequeue()
{
    struct node *temp;
    temp = front;
    if (front == NULL && rear == NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {
        front = front->next;
        free(temp);
    }
}
int show()
{
    struct node *temp;
    if (front == NULL && rear == NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {
        temp = front;
        while (temp != NULL)
        {
            printf("%d", temp->info);
            temp = temp->next;
        }
        printf("\n");
    }
}
int main()
{
    while (1)
    {
        int choice;
        int data;
        printf("Press 1 for insert in queue\n");
        printf("Press 2 for delete in queue\n");
        printf("Press 3 for show the data in queue\n");
        printf("Press any key for exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the node to be insert\t");
            scanf("%d", &data);
            enqueue(data);
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
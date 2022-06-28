/* Write a menu-based program to perform the following array operations: a) Insertion of an element at a specified position b) Deletion of an element at a specified position c) Merge two sorted arrays*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int a[10], i, c;
    printf("enter element to the array:- ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
first:
    printf("press 1 for insertion\npress 2 for deletion\npress 3 for mergee two arraay\nenter your choice:-");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        printf("\n enter position:-  ");
        int p, v;
        scanf("%d", &p);
        printf("enter value :- ");
        scanf("%d", &v);
        for (i = p - 1; i < 6; i++)
        {
            int t = v;
            v = a[i];
            a[i] = t;
        }
        printf("after insertion array is :- ");
        for (i = 0; i < 6; i++)
        {
            printf("%d ", a[i]);
        }
        break;
    case 2:
        printf("enter position to delete:- ");
        int n;
        scanf("%d", &n);
        for (i = 0; i < 5 - 1; i++)
        {
            if (i >= n - 1)
            {
                a[i] = a[i + 1];
            }
        }
        printf("after deletion array is :- ");
        for (i = 0; i < 5 - 1; i++)
        {
            printf("%d ", a[i]);
        }
        break;
    case 3:
        printf("enter new array element to merge:-");
        for (i = 5; i < 10; i++)
        {
            scanf("%d", &a[i]);
        }
        printf("after merge array is  :-");
        for (i = 0; i < 10; i++)
        {
            printf("%d ", a[i]);
        }
        break;
    default:
        printf("invalid choice please enter valid choice");
        goto first;
        break;
    }
}
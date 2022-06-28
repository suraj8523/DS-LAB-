/*Write a menu-based program to perform following operations on singly linked list: a) To insert a node at the beginning of the list. b) To insert a node at the end of the list. c) To insert a node after a given node in the list. d) To delete the first node from the list. e) To delete the last node from the list. f) To delete a node after a given node from the list. g) To delete a node at a given position from the list.*/
#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
#define NULL 0;

void main()
{
    struct node
    {
        int info;
        struct node *next;
    } * head, *tail, *new, *x,*y;
    int i, c,p,q;
    head = (struct node *)malloc(sizeof(struct node));
    tail = head;
    printf("enter value of link list:-\n");
    scanf("%d", &tail->info);
    for (i = 1; i < 5; i++)
    {
        tail->next = (struct node *)malloc(sizeof(struct node));
        tail = tail->next;
        scanf("%d", &tail->info);
    }
    tail->next = NULL;
    x = head;
    printf("lists are :- ");
    while (x != 0)
    {

        printf("%d ", x->info);
        x = x->next;
    }
    start:
    printf("\n\npress 1 for insert at first\npress 2 for insert last\npress 3 for insert a node at given position\n");
    printf("press 4 for delete first element\npress 5 for delete last element\npress 6 for delete a node at given position\n\nenter your choice:-");
    scanf("%d", &c);
    switch (c)
    {
      case 1:
        new = (struct node *)malloc(sizeof(struct node));
        new->next = head;
        head = new;
        x=head;
        printf("\nenter element :-");
        scanf("%d", &new->info);
        printf("after insert first element lists are :-\n");
        while (x !=0)
        {
            printf("%d ", x->info);
            x = x->next;
        }
        break;
        case 2:
        new=(struct node *)malloc(sizeof(struct node));
        tail->next=new;
        new->next=NULL;
        x=head;
        printf("\nenter element:-");
        scanf("%d",&new->info);
        printf("after insert last element lists are :-\n");
        while (x != 0)
        {
            printf("%d ", x->info);
            x = x->next;
        }
        break;
        case 3:
        printf("\nenter position to insert:- ");
        scanf("%d",&p);
        x=head;
        for(i=0;i<p-2;i++){
            x=x->next;
        }
        new=(struct node *)malloc(sizeof(struct node));
        new->next=x->next;
        x->next=new;
        printf("\nenter element:-");
        scanf("%d",&new->info);
        x=head;
         printf("after insert at %dth element lists are :-\n",p);
        while (x != 0)
        {
            printf("%d ", x->info);
            x = x->next;
        }
        break;
        case 4:
            head=head->next;
            x=head;
        printf("after delete first element lists are :-\n");
        while (x != 0)
        {
            printf("%d ", x->info);
            x = x->next;
        }
        break;
        case 5:
        x=head;
        while(x->next!=0){
            y=x;
            x=x->next;
        }
        y->next=NULL;
        tail=y;
        x=head;
        printf("after delete last element lists are :-\n");
        while (x != 0)
        {
            printf("%d ", x->info);
            x = x->next;
        }
        break;
        case 6:
        printf("\nenter position to delete:- ");
        scanf("%d",&q);
        x=head;
        for(i=1;i<q-1;i++){
            x=x->next;
        }
        y=x->next;
        x->next=y->next;
        x=head;
        printf("after delete %dth position element lists are :-\n",q);
        while (x != 0)
        {
            printf("%d ", x->info);
            x = x->next;
        }
        break;
      default:
       printf("invalid choice please choose valid option");
        goto start;
    }
}
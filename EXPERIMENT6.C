/* Write a menu-based program using functions to implement stack operations: PUSH, POP using linked implementation of stack*/
#include<stdio.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
    int info;
    struct node * link;
}*top,*temp,*ptr;
 top=NULL;
void main(){
   int ch, n, g, i;
 start:
    printf("\n\npress 1 for push\npress 2 for pop\npress 3 for dispaly stack\npress 4 for exit\n\nenter your choice:-");
    scanf("%d", &ch);
    switch (ch)
    {
     case 1:
      enter:
       printf("\nenter number of element you want to push:-");
        scanf("%d", &g);
        printf("\nenter number to push:-");
        for (i = 0; i < g; i++)
        {
            scanf("%d", &n);
            push(n);
        }
        goto start;
        break;
     case 2:
      exit:
        n = pop();
        printf("\npoped element %d", n);
        printf("\ndo you want to pop again press 1 another any key:-");
        scanf("%d", &g);
        if (g == 1)
            goto exit;
        else
            goto start;
        break;
     case 3:
        show();
        goto start;
        break;
     case 4:
        exit(0);
        break;
     default:
        printf("invalid choice please enter valid choice\n");
        goto start;
        break;
    }
}
void push(int n){
temp=(struct node*)malloc(sizeof(struct node));    
if(temp==NULL){
    printf("stack is overflow");
}
temp->info=n;
temp->link=top;
top=temp;
}
int pop(){
    int n;
    if(top==NULL){
        printf("stack overflow\n");
    }
    temp=top;
    n=temp->info;
    top=top->link;
    free(temp);
    return n;
}
void show(){
  
    ptr=top;
    if(top==NULL){
        printf("stack overflow\n");
    }
    printf("stack element :-\n");
    while(ptr!=NULL){
        printf("%d ",ptr->info);
        ptr=ptr->link;
    }
}
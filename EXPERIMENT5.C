// Write a menu-based program to implement stack operations: PUSH, POP using array implementation of stack
#include <stdio.h>
#include <conio.h>
#include <math.h>
#define max 10
int st[max];
int top = -1;
void main()
{
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
void push(int x)
{
    if (top == max)
        printf("stack is overflow");
    else
    {
        top = top + 1;
        st[top] = x;
    }
}
int pop()
{
    int x;
    if (top == -1)
        printf("stack is empty");
    else
    {
        x = st[top];
        top = top - 1;
        return x;
    }
}
void show()
{
    int c;
    printf("\nlist of stack elements are:-");
    for (c = top; c >= 0; --c)
    {
        printf("%d ", st[c]);
    }
}
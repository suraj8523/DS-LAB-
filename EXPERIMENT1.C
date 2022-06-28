// Write a program to find second minimum and second maximum elements of a given array
#include <stdio.h>
#include <conio.h>
void main()
{
    int a[5], i;
    printf("enter element of array:- ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    printf("second largest element of array is :- %d\n", a[3]);
    printf("second minimum element of array is :- %d\n", a[1]);
}
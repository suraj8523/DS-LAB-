/*Write a program to sort given set of numbers in ascending/descending order using Quick sort*/
#include <stdio.h>
#include <conio.h>

int a[5];
int main()
{
    void quicksort(int, int);
    printf("enter the number to be sorted \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    quicksort(0, 4);
    printf("After quicksort elements are:-\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
}
void quicksort(int beg, int end)
{
    int temp;
    int b = beg;
    int e = end;
    int key = a[beg];
    while (b < e)
    {
        while (a[e] > key)
            e--;
        temp = a[b];
        a[b] = a[e];
        a[e] = temp;

        while (a[b] < key)
            b++;
        temp = a[b];
        a[b] = a[e];
        a[e] = temp;
    }
    if (beg < e - 1)
    {
        quicksort(beg, e - 1);
    }
    if (b + 1 < end)
    {
        quicksort(b + 1, end);
    }
}
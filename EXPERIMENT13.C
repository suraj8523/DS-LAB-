/*Write a program to sort given set of numbers in ascending/descending order using insertion sort and also search a number using binary search.*/
#include <stdio.h>
#include <conio.h>

int insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
int binarySearch(int arr[], int n, int search)
{
    int beg = 0;
    int flag = 1;
    int end = n - 1;
    int mid = (beg + end) / 2;
    while (arr[mid] != search && beg < end)
    {
        if (arr[mid] < search)
        {
            beg = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (beg + end) / 2;
    }
    if (arr[mid] == search)
    {
        printf("Number present at index %d", mid + 1);
    }
    else
    {
        printf("Number Not present");
    }
}
void printArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int size;
    printf("enter the size of element to be sorted\t");
    scanf("%d", &size);
    int arr[size];
    printf("enter the element\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Given array is \n");
    printArray(arr, size);
    insertionSort(arr, size);
    printf("\nSorted array is \n");
    printArray(arr, size);
    printf("\nEnter number to be search\t");
    int search;
    scanf("%d", &search);
    binarySearch(arr, size, search);
    return 0;
}
#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int a[], int lb, int ub)
{
    int pivot = a[lb];
    int start = lb, end = ub;

    while (start < end)
    {
        while (a[start] <= pivot)
        {
            start++;
        }
        while (a[end] >= pivot)
        {
            end--;
        }
        if (start < end)
        {
            swap(&a[start], &a[end]);
        }
    }
    swap(&a[lb], &a[end]);

    return end;
}

void quickSort(int a[], int lb, int ub)
{
    if (lb < ub)
    {
        int loc = partition(a, lb, ub);
        quickSort(a, lb, loc - 1);
        quickSort(a, loc + 1, ub);
    }
}

int main()
{
    int a[7] = {10, 15, 1, 2, 9, 16, 11};
    int n = 7, lb = 0, ub = n - 1;

    quickSort(a, lb, ub);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
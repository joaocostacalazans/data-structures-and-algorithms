#include <stdio.h>

int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a[6] = {7, 4, 10, 8, 3, 1};
    int n = 6;

    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            swap(&a[i], &a[min]);
        }
    }

    for (int k = 0; k < n; k++)
    {
        printf("%d ", a[k]);
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int a[6] = {5, 4, 10, 1, 6, 2};
    int n = 6;

    for (int i = 1; i < n; i++)
    {
        int temp = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = temp;
    }

    for (int k = 0; k < n; k++)
    {
        printf("%d ", a[k]);
    }

    return 0;
}
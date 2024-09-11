#include <stdio.h>

#define LENGTH 5

void bsort(int a[], int len)
{
    for (int i = len - 1; i > 0; i--)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
}

int main(void)
{
    int a[LENGTH];

    printf("Input %d numbers: \n", LENGTH);
    for (int i = 0; i < LENGTH; i++)
    {
        printf("%2d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Sorting the list...\n");
    bsort(a, LENGTH);
    for (int i = 0; i < LENGTH; i++)
    {
        printf("%2d: %4d\n", i + 1, a[i]);
    }
    return 0;
}
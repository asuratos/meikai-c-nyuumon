#include <stdio.h>

#define MAX 3

int main(void)
{
    int a[MAX];

    printf("Input %d numbers: \n", MAX);
    for (int i = 0; i < MAX; i++)
    {
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("Flipping the array...\n");
    for (int i = 0; i < (MAX / 2); i++)
    {
        int t;

        t = a[i];
        a[i] = a[MAX - 1 - i];
        a[MAX - 1 - i] = t;
    }

    for (int i = 0; i < MAX; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
}
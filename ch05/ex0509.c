#include <stdio.h>

int main(void)
{
    int a[5];
    int b[5];

    printf("Input the array values for a: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        b[4 - i] = a[i];
    }

    printf("   a   b\n");
    printf("--------\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%4d%4d\n", a[i], b[i]);
    }
}
#include <stdio.h>

int main(void)
{
    int num;

    printf("Input a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        putchar('*');
        if (i % 5 == 0)
            putchar('\n');
    }
    return 0;
}
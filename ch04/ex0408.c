#include <stdio.h>

int main(void)
{
    int num;

    printf("Input a number: ");
    scanf("%d", &num);

    if (num > 0)
    {
        while (num-- > 0)
            putchar('*');
        printf("\n");
    }
    return 0;
}
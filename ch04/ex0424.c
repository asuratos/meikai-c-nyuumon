#include <stdio.h>

int main(void)
{
    int height;

    printf("Input the height of the pyramid: ");
    scanf("%d", &height);

    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= height - i; j++)
        {
            putchar(' ');
        }
        for (int j = 1; j <= (i - 1) * 2 + 1; j++)
        {
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}
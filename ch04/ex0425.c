#include <stdio.h>

int main(void)
{
    int height;

    printf("Input the height of the pyramid: ");
    scanf("%d", &height);

    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            putchar(' ');
        }
        for (int j = 1; j <= (height - i) * 2 + 1; j++)
        {
            printf("%d", i % 10);
        }
        putchar('\n');
    }
    return 0;
}
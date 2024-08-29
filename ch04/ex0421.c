#include <stdio.h>

int main(void)
{
    int num;

    printf("Input a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}
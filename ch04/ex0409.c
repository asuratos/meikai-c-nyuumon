#include <stdio.h>

int main(void)
{
    int num;

    printf("Input a number: ");
    scanf("%d", &num);

    if (num > 0)
    {
        while (num-- > 0)
        {
            if (num % 2)
            {
                putchar('+');
            }
            else
            {
                putchar('-');
            }
        }
        printf("\n");
    }
    return 0;
}
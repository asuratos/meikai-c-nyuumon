#include <stdio.h>

int main(void)
{
    int num;

    printf("Input a number: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("%d has ", num);
        int digits = 0;
        while (num > 0)
        {
            num /= 10;
            digits++;
        }
        printf("%d digit(s)", digits);
    }
    return 0;
}
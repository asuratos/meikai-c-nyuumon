#include <stdio.h>

int main(void)
{
    int num;

    printf("Input a number: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("%d when read backwards is ", num);
        while (num > 0)
        {
            printf("%d", num % 10);
            num /= 10;
        }
    }
    return 0;
}
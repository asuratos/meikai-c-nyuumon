#include <stdio.h>

int main(void)
{
    int retry;

    do
    {
        int num;
        printf("Input a number: \n");
        scanf("%d", &num);

        if (num > 0)
        {
            puts("The number is positive");
        }
        else if (num < 0)
        {
            puts("The number is negative");
        }
        else
        {
            puts("The number is 0");
        }

        printf("Start again? 0 => Yes, 1 => No ");
        scanf("%d", &retry);

    } while (retry == 0);
}
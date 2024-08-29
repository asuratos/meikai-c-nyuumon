#include <stdio.h>

int main(void)
{
    int num;

    printf("Input a number: ");
    scanf("%d", &num);

    if (num > 0)
    {
        int i = 1;
        while ((2 * i) <= num)
            printf("%d ", (i++) * 2);
        printf("\n");
    }
    return 0;
}
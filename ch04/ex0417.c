#include <stdio.h>

int main(void)
{
    int num;

    printf("Input a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        printf("%d squared is %d\n", i, i * i);
    }
    return 0;
}
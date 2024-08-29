#include <stdio.h>

int main(void)
{
    int num;
    int count = 0;

    printf("Input a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d\n", i);
            count++;
        }
    }
    printf("The number has %d total factors.", count);
    return 0;
}
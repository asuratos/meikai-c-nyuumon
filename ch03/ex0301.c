#include <stdio.h>

int main(void)
{
    int a, b;

    printf("Input 2 integers: \n");
    scanf("%d", &a);
    scanf("%d", &b);

    if (a % b)
    {
        printf("%d is not divisible by %d", a, b);
    }
    else
    {
        printf("%d is divisible by %d", a, b);
    }
}
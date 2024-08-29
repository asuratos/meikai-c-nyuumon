#include <stdio.h>

int main(void)
{
    int a, b, diff;

    printf("Input 2 integers: \n");
    scanf("%d", &a);
    scanf("%d", &b);

    if (a > b)
    {
        diff = a - b;
    }
    else
    {
        diff = b - a;
    }

    if (diff < 10)
    {
        puts("The difference is less than 10.");
    }
    else
    {
        puts("The difference is greater than 10.");
    }
}
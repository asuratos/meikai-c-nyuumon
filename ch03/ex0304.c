#include <stdio.h>

int main(void)
{
    int a, b;

    printf("Input 2 integers: \n");
    scanf("%d", &a);
    scanf("%d", &b);

    if (a > b)
    {
        puts("A is greater than B.");
    }
    else if (a < b)
    {
        puts("B is greater than A.");
    }
    else
    {
        puts("A and B are the same.");
    }
}
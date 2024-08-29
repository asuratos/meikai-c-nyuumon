#include <stdio.h>

int main(void)
{
    int a, b, c;

    printf("Input 3 integers: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a == b && b == c)
    {
        puts("All three are the same.");
    }
    else if (a == b || b == c || a == c)
    {
        puts("Two numbers are the same.");
    }
    else
    {
        puts("No numbers are the same");
    }
}
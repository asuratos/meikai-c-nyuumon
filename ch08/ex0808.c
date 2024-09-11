#include <stdio.h>

int gcd(int a, int b)
{
    if (a > b)
    {
        return gcd(a - b, b);
    }
    else if (b > a)
    {
        return gcd(a, b - a);
    }
    else if (a == b)
    {
        return a;
    }
}

int main(void)
{
    int a, b;
    printf("Input 2 numbers: \n");
    scanf("%d", &a);
    scanf("%d", &b);

    printf("Their GCD is %d", gcd(a, b));

    return 0;
}
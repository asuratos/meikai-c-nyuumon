#include <stdio.h>
#define BITS 32

void print_bits(unsigned x)
{
    for (int i = BITS - 1; i >= 0; i--)
    {
        putchar((((x >> i) & 1U) ? '1' : '0'));
    }
}

unsigned rrotate(unsigned x, int n)
{
    unsigned a, b;
    a = x >> n;
    b = x << (BITS - n);

    return (a | b);
}
unsigned lrotate(unsigned x, int n)
{
    unsigned a, b;
    a = x << n;
    b = x >> (BITS - n);

    return (a | b);
}

int main(void)
{
    unsigned num, rrotated, lrotated;

    num = 8;
    printf("%10u: ", num);
    print_bits(num);
    putchar('\n');

    rrotated = rrotate(num, 5);
    printf("%10u: ", rrotated);
    print_bits(rrotated);
    putchar('\n');

    lrotated = lrotate(num, 5);
    printf("%10u: ", lrotated);
    print_bits(lrotated);
    putchar('\n');
    return 0;
}
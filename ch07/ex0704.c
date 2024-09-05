#include <stdio.h>
#define BITS 32

void print_bits(unsigned x)
{
    for (int i = BITS - 1; i >= 0; i--)
    {
        putchar((((x >> i) & 1U) ? '1' : '0'));
    }
}

unsigned set(unsigned x, int pos)
{
    return (x | (1U << pos));
}

unsigned reset(unsigned x, int pos)
{
    return (x & (~(1U << pos)));
}

unsigned inverse(unsigned x, int pos)
{
    return (x ^ (1U << pos));
}

int main(void)
{
    unsigned num;

    num = 0;
    printf("%10u: ", num);
    print_bits(num);
    putchar('\n');

    int bit = 5;
    printf("Setting %dth bit...\n", bit);
    num = set(num, bit);
    printf("%10u: ", num);
    print_bits(num);
    putchar('\n');

    printf("Resetting %dth bit...\n", bit);
    num = reset(num, bit);
    printf("%10u: ", num);
    print_bits(num);
    putchar('\n');

    printf("Inverting the %dth bit...\n", bit);
    num = inverse(num, bit);
    printf("%10u: ", num);
    print_bits(num);
    putchar('\n');

    return 0;
}
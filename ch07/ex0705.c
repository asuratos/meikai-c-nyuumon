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

unsigned set_n(unsigned x, int pos, int n)
{
    for (int i = 0; i < n; i++)
        x = set(x, pos + i);
    return x;
}

unsigned reset_n(unsigned x, int pos, int n)
{
    for (int i = 0; i < n; i++)
        x = reset(x, pos + i);
    return x;
}

unsigned inverse_n(unsigned x, int pos, int n)
{
    for (int i = 0; i < n; i++)
        x = inverse(x, pos + i);
    return x;
}

int main(void)
{
    unsigned num;

    num = 0;
    printf("%10u: ", num);
    print_bits(num);
    putchar('\n');

    int bit = 5;
    int n = 3;
    printf("Setting %dth to %dth bit...\n", 1, 1 + 8);
    num = set_n(num, 1, 8);
    printf("%10u: ", num);
    print_bits(num);
    putchar('\n');

    printf("Resetting %dth to %dth bit...\n", 2, 2 + 3);
    num = reset_n(num, 2, 3);
    printf("%10u: ", num);
    print_bits(num);
    putchar('\n');

    printf("Inverting the %dth to %dth bit...\n", 0, 8);
    num = inverse_n(num, 0, 8);
    printf("%10u: ", num);
    print_bits(num);
    putchar('\n');

    return 0;
}
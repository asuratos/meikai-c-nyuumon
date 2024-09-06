#include <stdio.h>
#define BITS 16

void print_bits(unsigned short x)
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
    unsigned short num = ~0;

    print_bits(num);

    num += 1;
    print_bits(num);

    return 0;
}
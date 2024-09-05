#include <stdio.h>

void print_bits(unsigned x)
{
    for (int i = 7; i >= 0; i--)
    {
        putchar((((x >> i) & 1U) ? '1' : '0'));
    }
}

int main(void)
{
    int num = 8;
    printf("%3d: ", num);
    print_bits(num);
    putchar('\n');

    printf("%d << 1: ", num);
    print_bits(num << 1);
    printf(" -> %d", num << 1);
    putchar('\n');

    printf("%d >> 1: ", num);
    print_bits(num >> 1);
    printf(" -> %d", num >> 1);
    return 0;
}
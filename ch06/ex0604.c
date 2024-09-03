#include <stdio.h>

int sqr(int a)
{
    return a * a;
}

int pow4(int a)
{
    return sqr(sqr(a));
}

int main(void)
{
    return 0;
}
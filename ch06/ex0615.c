#include <stdio.h>

void put_count(void)
{
    static int count = 0;

    printf("Times called: %d\n", ++count);
}

int main(void)
{
    put_count();
    put_count();
    put_count();
    return 0;
}
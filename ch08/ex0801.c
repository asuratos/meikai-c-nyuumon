#include <stdio.h>

#define diff(x, y) (((x) > (y)) ? (x) - (y) : (y) - (x))

int main(void)
{
    printf("The difference of %d and %d is %d", 5, 8, diff(5, 8));
    return 0;
}
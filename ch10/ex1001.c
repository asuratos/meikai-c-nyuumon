#include <stdio.h>

void adjust_point(int *p)
{
    if (*p > 100)
        *p = 100;
    if (*p < 0)
        *p = 0;
}

int main(void)
{
    int n;
    printf("Input a number: ");
    scanf("%d", &n);
    adjust_point(&n);
    printf("That number adjusted is %d", n);
    return 0;
}
#include <stdio.h>

int main(void)
{
    int a, b, c, d;

    printf("Input 4 integers: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    int max = a;
    if (max < b)
        max = b;
    if (max < c)
        max = c;
    if (max < d)
        max = d;

    printf("The maximum value is %d", max);
}
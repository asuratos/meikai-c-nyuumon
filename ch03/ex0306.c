#include <stdio.h>

int main(void)
{
    int a, b, c;

    printf("Input 3 integers: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    int min = a;
    if (min > b)
        min = b;
    if (min > c)
        min = c;

    printf("The minimum value is %d", min);
}
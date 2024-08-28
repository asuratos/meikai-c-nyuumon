#include <stdio.h>

int main(void)
{
    int a, b;

    printf("Input 2 integers: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d is %f%% of %d", a, ((double)a / b) * 100, b);
}
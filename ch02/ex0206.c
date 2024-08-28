#include <stdio.h>

int main(void)
{
    int a;

    printf("Input your height (cm): \n");
    scanf("%d", &a);
    printf("The average weight for that height is %.1f",
           ((double)a - 100) * 0.9);
}
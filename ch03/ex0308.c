#include <stdio.h>

int main(void)
{
    int a, b;

    printf("Input 2 integers: \n");
    scanf("%d", &a);
    scanf("%d", &b);

    printf("The difference between the two numbers is %d",
           a < b ? b - a : a - b);
}
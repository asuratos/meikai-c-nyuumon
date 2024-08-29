#include <stdio.h>

int main(void)
{
    int a, b, c, min;

    printf("Input 3 integers: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    printf("The minimum value is %d",
           a > b ? (b > c ? c : b) : (a > c ? c : a));
}
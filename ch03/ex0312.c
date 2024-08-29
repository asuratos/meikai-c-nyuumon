#include <stdio.h>

int main(void)
{
    int a;

    printf("Input an integer: \n");
    scanf("%d", &a);

    switch (a % 2)
    {
    case 0:
        puts("The number is even.");
        break;

    default:
        puts("The number is odd.");
        break;
    }
}
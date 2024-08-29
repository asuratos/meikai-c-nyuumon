#include <stdio.h>

int main(void)
{
    int a;

    printf("Input an integer: \n");
    scanf("%d", &a);

    if (a < 0)
    {
        printf("The absolute value is %d", -a);
    }
    else
    {
        printf("The absolute value is %d", a);
    }
}
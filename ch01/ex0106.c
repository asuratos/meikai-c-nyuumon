#include <stdio.h>

int main(void)
{
    int num;

    printf("Input a number: ");
    scanf("%d", &num);
    printf("%d minus 7 is %d", num, num - 7);
}
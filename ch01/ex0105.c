#include <stdio.h>

int main(void)
{
    int num;

    printf("Input a number: ");
    scanf("%d", &num);
    printf("%d plus 13 is %d", num, num + 13);
}
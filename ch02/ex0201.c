#include <stdio.h>

int main(void)
{
    int num1, num2;
    printf("Input two numbers: \n");

    scanf("%d", &num1);
    scanf("%d", &num2);

    printf("%d is %d%% of %d.", num1, (num1 * 100) / num2, num2);
}
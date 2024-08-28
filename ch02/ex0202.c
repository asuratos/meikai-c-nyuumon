#include <stdio.h>

int main(void)
{
    int num1, num2;
    printf("Input two numbers: \n");

    scanf("%d", &num1);
    scanf("%d", &num2);

    printf("Their sum is %d and the product is %d.", num1 + num2, num1 * num2);
}
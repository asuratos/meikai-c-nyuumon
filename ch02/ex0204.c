#include <stdio.h>

int main(void)
{
    double num1;
    int num2;

    printf("Input a floating point number: ");
    scanf("%lf", &num1);
    printf("Input an integer: ");
    scanf("%d", &num2);

    printf("%f + %d = %f\n", num1, num2, num1 + num2);
    printf("%f - %d = %f\n", num1, num2, num1 - num2);
    printf("%f * %d = %f\n", num1, num2, num1 * num2);
    printf("%f / %d = %f\n", num1, num2, num1 / num2);
}
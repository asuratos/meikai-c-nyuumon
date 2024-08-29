#include <stdio.h>

int main(void)
{
    int num1, num2, low, high, curr;
    int sum = 0;

    printf("Input 2 numbers: \n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    if (num1 > num2)
    {
        high = num1;
        low = num2;
    }
    else
    {
        high = num2;
        low = num1;
    }

    curr = low;

    do
    {
        sum += curr;
        curr++;
    } while (curr <= high);

    printf("The sum of all numbers between %d and %d is %d",
           low, high, sum);
}
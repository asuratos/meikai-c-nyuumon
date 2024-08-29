#include <stdio.h>

int main(void)
{
    int num;
    int sum = 0;

    printf("Input a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        sum += i;
    }
    printf("The sum of all numbers from 1 to %d is %d",
           num, sum);
    return 0;
}
#include <stdio.h>

int sumup(int n)
{
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    return sum;
}

int main(void)
{
    int n;
    puts("Input a number: ");
    scanf("%d", &n);

    printf("The sum of numbers from 1 to %d is %d", n, sumup(n));

    return 0;
}
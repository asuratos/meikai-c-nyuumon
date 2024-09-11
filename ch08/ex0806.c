#include <stdio.h>

int main(void)
{
    int num;
    int fact = 1;
    printf("Input a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    printf("%d! = %d", num, fact);
    return 0;
}
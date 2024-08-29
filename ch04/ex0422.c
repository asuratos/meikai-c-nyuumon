#include <stdio.h>

int main(void)
{
    int num1, num2, rows, cols;

    printf("Input the length of one side: ");
    scanf("%d", &num1);

    printf("Input the length of the other side: ");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        cols = num1;
        rows = num2;
    }
    else
    {
        cols = num2;
        rows = num1;
    }

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}
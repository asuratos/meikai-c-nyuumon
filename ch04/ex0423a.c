#include <stdio.h>

int main(void)
{
    int len;

    printf("Input the length of one side: ");
    scanf("%d", &len);

    for (int i = 1; i <= len; i++)
    {
        for (int j = 0; j <= len - i; j++)
        {
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}
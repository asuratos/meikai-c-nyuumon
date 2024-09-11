#include <stdio.h>

int main(void)
{
    int ch;
    int count[10] = {0};

    printf("Input a number... (End with ^Z)\n");
    while ((ch = getchar()) != EOF)
        if (ch >= '0' && ch <= '9')
            count[ch - '0']++;

    puts("Histogram of digits:");
    for (int i = 0; i < 10; i++)
    {
        printf("%d: ", i);
        for (int j = 0; j < count[i]; j++)
            printf("*");
        putchar('\n');
    }

    return 0;
}
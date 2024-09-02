#include <stdio.h>

#define MAX 10

int main(void)
{
    int num;
    int scores[MAX];
    int hist[11] = {0};

    printf("How many scores? ");

    do
    {
        scanf("%d", &num);
        if (num < 0 || num > MAX)
            printf("Input a number from 1 ~ %d\n", MAX);

    } while (num < 0 || num > MAX);

    printf("Input %d numbers: \n", num);
    for (int i = 0; i < num; i++)
    {
        printf("%2d: ", i);
        do
        {
            scanf("%d", &scores[i]);
            if (scores[i] < 0 || scores[i] > 100)
                printf("Input a score from 0 ~ 100!\n");
        } while (scores[i] < 0 || scores[i] > 100);
        hist[scores[i] / 10]++;
    }

    printf("---Histogram---\n");
    for (int i = 0; i <= 9; i++)
    {
        printf("%3d ~ %3d: ", i * 10, (i * 10) + 9);
        for (int j = 0; j < hist[i]; j++)
            putchar('*');
        putchar('\n');
    }

    printf("      100: ");
    for (int j = 0; j < hist[10]; j++)
        putchar('*');
}
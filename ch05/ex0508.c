#include <stdio.h>

#define MAX 20

int main(void)
{
    int num;
    int scores[MAX];
    int hist[11] = {0};
    int histmax = 0;

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
        printf("%2d: ", i + 1);
        do
        {
            scanf("%d", &scores[i]);
            if (scores[i] < 0 || scores[i] > 100)
                printf("Input a score from 0 ~ 100!\n");
        } while (scores[i] < 0 || scores[i] > 100);
        hist[scores[i] / 10]++;
    }

    printf("---Histogram---\n");
    // get max value in hist
    for (int i = 0; i < 11; i++)
    {
        if (histmax < hist[i])
            histmax = hist[i];
    }

    for (int i = histmax; i > 0; i--)
    {
        for (int j = 0; j < 11; j++)
        {
            if (hist[j] >= i)
            {
                printf("  * ");
            }
            else
            {
                printf("    ");
            }
        }
        putchar('\n');
    }
    for (int i = 0; i < 44; i++)
        putchar('-');
    putchar('\n');
    for (int i = 0; i < 11; i++)
    {
        printf("%3d ", i * 10);
    }
}
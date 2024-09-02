#include <stdio.h>

int main(void)
{
    int scores[2][4][3] = {
        {{91, 73, 78},
         {67, 72, 46},
         {89, 34, 53},
         {32, 54, 34}},
        {{97, 67, 82},
         {73, 43, 46},
         {97, 56, 21},
         {85, 46, 35}}};
    int sum[4][3];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[i][j] = scores[0][i][j] + scores[1][i][j];
        }
    }
    puts("First try scores: ");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%4d", scores[0][i][j]);
        }
        putchar('\n');
    }
    puts("Second try scores: ");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%4d", scores[1][i][j]);
        }
        putchar('\n');
    }
    puts("Totals:");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%4d", sum[i][j]);
        }
        putchar('\n');
    }
    return 0;
}
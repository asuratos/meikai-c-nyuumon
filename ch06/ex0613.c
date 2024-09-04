#include <stdio.h>

int mat_add(const int a[2][4][3], int sum[4][3])
{
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 3; j++)
            sum[i][j] = a[0][i][j] + a[1][i][j];
}

int mat_print(int a[4][3])
{

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%4d", a[i][j]);
        }
        putchar('\n');
    }
}

int main(void)
{
    int scores[2][4][3] = {
        {{91, 63, 78},
         {67, 72, 46},
         {89, 34, 53},
         {32, 54, 34}},
        {{97, 67, 82},
         {73, 43, 46},
         {97, 56, 21},
         {85, 46, 35}}};
    int sum[4][3];

    printf("The first test results: \n");
    mat_print(scores[0]);
    printf("The second test results: \n");
    mat_print(scores[1]);

    mat_add(scores, sum);
    printf("The sums: \n");
    mat_print(sum);
}
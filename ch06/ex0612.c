#include <stdio.h>

void mat_mul(const int a[4][3], const int b[3][4], int c[4][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            int sum = 0;
            for (int k = 0; k < 3; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            c[i][j] = sum;
        }
    }
}

int main(void)
{
    int a[4][3] = {{91, 73, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34}};
    int b[4][3] = {{97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35}};
}
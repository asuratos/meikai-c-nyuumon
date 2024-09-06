#include <stdio.h>

int main(void)
{
    float x;
    float y = 0;

    for (int i = 0; i <= 100; i++)
    {
        x = i / 100.0;
        y += 0.01;

        printf("x = %10f, y = %10f\n", x, y);
    }
    return 0;
}
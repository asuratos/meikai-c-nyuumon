#include <stdio.h>

int main(void)
{
    float x, xsum;
    float y = 0;
    float ysum = 0;
    for (int i = 0; i <= 100; i++)
    {
        xsum += i / 100.0;
        y += 0.01;
        ysum += y;
    }
    printf("xsum = %f, ysum = %f", xsum, ysum);
    return 0;
}
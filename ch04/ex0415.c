#include <stdio.h>

int main(void)
{
    int height_low, height_high, interval;

    printf("Input a starting height: ");
    scanf("%d", &height_low);
    printf("Input an ending height: ");
    scanf("%d", &height_high);
    printf("Input the interval between heights: ");
    scanf("%d", &interval);

    for (int i = height_low; i <= height_high; i += interval)
    {
        printf("Height: %dcm, Weight: %.2fkg\n", i, (double)(i - 100) * 0.9);
    }
    return 0;
}
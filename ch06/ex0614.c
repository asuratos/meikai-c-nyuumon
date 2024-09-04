#include <stdio.h>

double test[5];

int main(void)
{
    for (int i = 0; i < 5; i++)
        printf("test[%d]: %.2f\n", i, test[i]);
    return 0;
}
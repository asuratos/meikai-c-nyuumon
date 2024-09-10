#include <stdio.h>

#define diff(x, y) (((x) > (y)) ? (x) - (y) : (y) - (x))
#define max(x, y) (((x) > (y)) ? (x) : (y))

int main(void)
{
    int a[4];
    printf("Input 4 numbers:\n");

    for (int i; i < 4; i++)
    {
        printf("%3d:", i);
        scanf("%d", &a[i]);
    }

    printf("Method A gives: %d\n", max(max(a[0], a[1]), max(a[2], a[3])));
    printf("Method B gives: %d\n", max(max(max(a[0], a[1]), a[2]), a[3]));
    return 0;
}
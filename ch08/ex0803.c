#include <stdio.h>

#define diff(x, y) (((x) > (y)) ? (x) - (y) : (y) - (x))
#define max(x, y) (((x) > (y)) ? (x) : (y))
#define swap(type, a, b) \
    type c = a;          \
    a = b;               \
    b = c;

int main(void)
{
    int a, b;
    printf("Input 4 numbers:\n");

    printf("1: ");
    scanf("%d", &a);
    printf("2: ");
    scanf("%d", &b);

    swap(int, a, b);

    printf("After swapping: \na: %d\nb: %d", a, b);

    return 0;
}
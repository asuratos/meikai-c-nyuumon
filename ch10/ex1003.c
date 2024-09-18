#include <stdio.h>

void swap(int *n1, int *n2)
{
    int tmp = *n1;
    *n1 = *n2;
    *n2 = tmp;
}

void sort2(int *n1, int *n2)
{
    if (*n1 > *n2)
        swap(n1, n2);
}

void sort3(int *n1, int *n2, int *n3)
{
    sort2(n1, n2);
    sort2(n2, n3);
    sort2(n1, n2);
}

int main(void)
{
    int a, b, c;

    printf("Input 3 numbers: \n1: ");
    scanf("%d", &a);
    printf("2: ");
    scanf("%d", &b);
    printf("3: ");
    scanf("%d", &c);

    sort3(&a, &b, &c);
    printf("Sorting in increasing order...\n");
    printf("The numbers go %d %d %d", a, b, c);
    return 0;
}
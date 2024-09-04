#include <stdio.h>

#define NUMBER 5

void rev_intary(int v[], int len)
{
    int tmp;
    for (int i = 0; i < len / 2; i++)
    {
        tmp = v[i];
        v[i] = v[len - i - 1];
        v[len - i - 1] = tmp;
    }

    printf("Reversing the array\n");
    for (int i = 0; i < len; i++)
    {
        printf("%d: %d\n", i, v[i]);
    }
}

int main(void)
{
    int v[NUMBER];

    printf("Input %d numbers: \n", NUMBER);
    for (int i = 0; i < NUMBER; i++)
    {
        printf("%d : ", i);
        scanf("%d", &v[i]);
    }

    rev_intary(v, NUMBER);

    return 0;
}
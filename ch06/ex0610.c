#include <stdio.h>

#define NUMBER 5

void intary_rcpy(int v1[], const int v2[], int len)
{
    int tmp;
    for (int i = 0; i <= len / 2; i++)
    {
        v1[i] = v2[len - i - 1];
        v1[len - i - 1] = v2[i];
    }

    printf("Reversing the array\n");
    for (int i = 0; i < len; i++)
    {
        printf("%d: %d\n", i, v1[i]);
    }
}

int main(void)
{
    int v1[NUMBER];
    int v2[NUMBER];

    printf("Input %d numbers: \n", NUMBER);
    for (int i = 0; i < NUMBER; i++)
    {
        printf("%d : ", i);
        scanf("%d", &v2[i]);
    }

    intary_rcpy(v1, v2, NUMBER);

    return 0;
}
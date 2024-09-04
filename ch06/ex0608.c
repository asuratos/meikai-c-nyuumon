#include <stdio.h>

#define NUMBER 5

int min_of(int v[], int len)
{
    int min = v[0];

    for (int i = 1; i < len; i++)
        if (v[i] < min)
            min = v[i];

    return min;
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

    printf("The minimum is: %d", min_of(v, NUMBER));
    return 0;
}
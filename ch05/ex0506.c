#include <stdio.h>

#define MAX 10

int main(void)
{
    int num;
    int scores[MAX];

    printf("How many data points? ");

    do
    {
        scanf("%d", &num);
        if (num < 0 || num > MAX)
            printf("Input a number from 1 ~ %d\n", MAX);

    } while (num < 0 || num > MAX);

    printf("Input %d numbers: \n", num);
    for (int i = 0; i < num; i++)
    {
        printf("%2d: ", i);
        scanf("%d", &scores[i]);
    }

    printf("{");
    for (int i = 0; i < num - 1; i++)
    {
        printf("%d, ", scores[i]);
    }
    printf("%d}", scores[num - 1]);
}
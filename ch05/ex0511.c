#include <stdio.h>

int main(void)
{
    int scores[6][2]; // 6 students, 2 classes

    for (int i = 0; i < 6; i++)
    {
        printf("Student %d: \n", i + 1);
        printf("Math: ");
        scanf("%d", &scores[i][0]);
        printf("Science: ");
        scanf("%d", &scores[i][1]);
    }
    printf("-----------\n");
    for (int i = 0; i < 6; i++)
    {
        printf("For Student %d:\n", i + 1);
        printf("Sum of scores: %d\n", scores[i][0] + scores[i][1]);
        printf("Average: %f\n", (double)(scores[i][0] + scores[i][1]) / 2);
    }
}
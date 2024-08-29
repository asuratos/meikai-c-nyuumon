#include <stdio.h>

int main(void)
{
    int num;

    printf("Input a number: ");
    scanf("%d", &num);

    if (num > 0)
    {
        int curr = 2;
        while (curr <= num)
        {
            printf("%d ", curr);
            curr *= 2;
        }
        printf("\n");
    }
    return 0;
}
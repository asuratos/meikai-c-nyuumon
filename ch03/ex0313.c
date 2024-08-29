#include <stdio.h>

int main(void)
{
    int a;

    printf("Input a month: \n");
    scanf("%d", &a);

    switch (a)
    {
    case 12:
    case 1:
    case 2:
        puts("That month is in winter.");
        break;
    case 3:
    case 4:
    case 5:
        puts("That month is in spring.");
        break;
    case 6:
    case 7:
    case 8:
        puts("That month is in summer.");
        break;
    case 9:
    case 10:
    case 11:
        puts("That month is in autumn.");
        break;

    default:
        puts("That is not a valid month.");
        break;
    }
}
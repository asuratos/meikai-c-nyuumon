#include <stdio.h>

int main(void)
{
    int n1, n2, n3;

    puts("Input three numbers:");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    printf("Their sum is %d", n1 + n2 + n3);
}
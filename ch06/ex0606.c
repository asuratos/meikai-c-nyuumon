#include <stdio.h>

void alert(int n)
{
    while (n-- > 0)
        printf("ALERT\n");
}

int main(void)
{
    int n;
    puts("Input a number: ");
    scanf("%d", &n);

    alert(n);

    return 0;
}
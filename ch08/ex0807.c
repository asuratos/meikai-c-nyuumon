#include <stdio.h>

int combination(int n, int r)
{
    if (r == n || r == 0)
    {
        return 1;
    }
    else if (r == 1)
    {
        return n;
    }

    return (combination(n - 1, r - 1) + combination(n - 1, r));
}

int main(void)
{
    int n, r;
    printf("Input parameters for nCr:\n");
    printf("n: ");
    scanf("%d", &n);
    printf("r: ");
    scanf("%d", &r);

    printf("%dC%d = %d", n, r, combination(n, r));
    return 0;
}
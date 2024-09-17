#include <stdio.h>

int main(void)
{
    char str[] = "abc\0def";

    printf("The string is %s", str);
    return 0;
}
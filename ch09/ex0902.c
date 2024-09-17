#include <stdio.h>

int main(void)
{
    char str[] = "abc\0";

    printf("The string is %s\n", str);
    str[0] = '\0';
    printf("The string is %s\n", str);
    return 0;
}
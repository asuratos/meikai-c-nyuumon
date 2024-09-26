#include <stdio.h>

void put_string(const char *s)
{
    do
    {
        putchar(*s);
    } while (*(s++));
}

int main(void)
{
    char str[100];
    printf("Input a string: ");
    scanf("%s", str);
    put_string(str);
}

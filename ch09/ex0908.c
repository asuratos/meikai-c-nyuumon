#include <stdio.h>

void put_stringr(const char s[])
{
    int len = 0;

    while (s[len])
    {
        len++;
    }

    for (int i = len - 1; i >= 0; i--)
    {
        putchar(s[i]);
    }
}

int main(void)
{
    char s[128];

    printf("Input a string: ");
    scanf("%s", s);

    printf("That string reversed is ");
    put_stringr(s);

    return 0;
}
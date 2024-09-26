#include <stdio.h>

char *str_chr(const char *s, int c)
{
    do
    {
        if (*s == c)
            return s;
    } while (*(s++));

    return 0;
}

int main(void)
{
    char str[100];
    int c;
    printf("Input a string: ");
    scanf("%s", str);
    printf("Input a character: ");
    scanf("%s", &c);
}

#include <stdio.h>

int str_chnum(const char *s, int c)
{
    int count = 0;
    do
    {
        if (*s == c)
            count++;
    } while (*(s++));
    return count;
}

int main(void)
{
    char str[100];
    int c;
    printf("Input a string: ");
    scanf("%s", str);
    printf("Input a character: ");
    scanf("%s", &c);
    printf("There are %d of that character in the string.", str_chnum(str, c));
}

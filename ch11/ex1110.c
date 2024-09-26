#include <stdio.h>
#include <ctype.h>

void str_tolower(char *s)
{
    do
    {
        *s = tolower(*s);
    } while (*(s++));
}

void str_toupper(char *s)
{
    do
    {
        *s = toupper(*s);
    } while (*(s++));
}

int main(void)
{
    char str[100];
    printf("Input a string: ");
    scanf("%s", str);

    str_toupper(str);
    printf("That string in uppercase: %s\n", str);
    str_tolower(str);
    printf("That string in lowercase: %s", str);
}

#include <stdio.h>
#include <ctype.h>

void del_digit(char *s)
{
    char *p = s;
    do
    {
        if (tolower(*p) != toupper(*p))
        {
            *s = *p;
            s++;
        }
    } while (*(p++));
    *s = '\0';
}

int main(void)
{
    char str[100];
    printf("Input a string: ");
    scanf("%s", str);

    del_digit(str);
    printf("That string without digits is: %s", str);
}

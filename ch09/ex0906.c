#include <stdio.h>

int str_chnum(const char s[], int c)
{
    int count = 0;
    int i = 0;

    while (s[i])
    {
        if (s[i] == c)
            count++;
        i++;
    }

    return count;
}

int main(void)
{
    char s[128];
    char c = 'X';
    printf("Input a string: ");
    scanf("%s", s);

    printf("The character %c appears %d times.", c, str_chnum(s, c));

    return 0;
}
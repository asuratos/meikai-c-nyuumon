#include <stdio.h>

int str_char(const char s[], int c)
{
    int i = 0;
    while (s[i])
    {
        if (s[i] == c)
            return i;
        i++;
    }
    return -1;
}

int main(void)
{
    char str[] = "ABCD";
    int c = 'C';

    printf("The string is %s\n", str);
    int loc = str_char(str, c);

    printf("The char %c is in location %d", c, loc);

    return 0;
}
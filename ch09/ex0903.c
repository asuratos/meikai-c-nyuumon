#include <stdio.h>

#define NUMBER 5

int is_end(char str[])
{
    for (int i = 0; i < 5; i++)
    {
        if (str[i] != '$')
            return 0;
    }
    if (str[5] == '\0')
        return 1;

    return 0;
}

int main(void)
{
    char s[NUMBER][128];

    for (int i = 0; i < NUMBER; i++)
    {
        printf("Input a string: ");
        scanf("%s", s[i]);

        if (is_end(s[i]) == 1)
            break;
    }

    for (int i = 0; i < NUMBER; i++)
    {
        if (is_end(s[i]) == 1)
            break;

        printf("s[%d] = %s\n", i, s[i]);
    }
    return 0;
}
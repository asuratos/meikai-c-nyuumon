#include <stdio.h>
#include <ctype.h>

void del_digit(char s[])
{
    int i = 0;
    int j = 0;

    while (s[i])
    {
        if (toupper(s[i]) != tolower(s[i]))
        {
            s[j] = s[i];
            j++;
        }
        i++;
    }
    s[j] = '\0';
}

int main(void)
{
    char s[128];

    printf("Input a string: ");
    scanf("%s", s);

    del_digit(s);
    printf("That string without digits is %s", s);

    return 0;
}
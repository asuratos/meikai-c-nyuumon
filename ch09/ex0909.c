#include <stdio.h>

void rev_string(char s[])
{
    int len = 0;

    while (s[len])
    {
        len++;
    }

    for (int i = 0; i < len / 2; i++)
    {
        int tmp = s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = tmp;
    }
}

int main(void)
{
    char s[128];

    printf("Input a string: ");
    scanf("%s", s);

    rev_string(s);
    printf("That string reversed is %s", s);

    return 0;
}
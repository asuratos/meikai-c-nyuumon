#include <stdio.h>

void null_string(char s[])
{
    int i = 0;
    while (s[i])
    {
        s[i] = '\0';
        i++;
    }
}

int main(void)
{
    char str[] = "ABCD";
    printf("The string is %s\n", str);
    null_string(str);
    printf("The string is %s\n", str);
    return 0;
}
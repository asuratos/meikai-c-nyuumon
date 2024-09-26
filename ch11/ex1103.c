#include <stdio.h>

int len(char s[])
{
    int len = 0;
    while (s[len++])
        ;
    return len - 1;
}

int main(void)
{

    char str[10];
    int n;

    printf("Input a string: ");
    scanf("%s", str);

    printf("The length of the string is: %d\n", len(str));

    return 0;
}
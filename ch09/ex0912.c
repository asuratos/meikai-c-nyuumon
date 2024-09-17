#include <stdio.h>

#define NUM 5
#define LEN 128

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

void put_strary(const char s[][LEN], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("s[%d] = %s\n", i, s[i]);
    }
}

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

void rev_strings(char s[][LEN], int n)
{
    for (int i = 0; i < n; i++)
    {
        rev_string(s[i]);
    }
}

int main(void)
{
    char cs[NUM][LEN];
    int count = 0;

    for (int i = 0; i < NUM; i++)
    {
        printf("Input a string: ");
        scanf("%s", cs[i]);

        if (is_end(cs[i]) == 1)
            break;
        count++;
    }

    printf("Reversing those strings...\n");
    rev_strings(cs, count);
    put_strary(cs, count);

    return 0;
}
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

    put_strary(cs, count);

    return 0;
}
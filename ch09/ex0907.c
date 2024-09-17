#include <stdio.h>

void put_strn(const char s[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        while (s[j])
        {
            printf("%c", s[j]);
            j++;
        }
    }
}

int main(void)
{
    char s[128];
    int n;

    printf("Input a string: ");
    scanf("%s", s);
    printf("Input a number: ");
    scanf("%d", &n);

    printf("Printing %s %d times...\n", s, n);
    put_strn(s, n);
    return 0;
}
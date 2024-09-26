#include <stdio.h>

char *ncat(char s1[], const char s2[], int n)
{
    char *p = s1;

    while (*(++p))
        ;

    for (int i = 0; i < n; i++)
    {
        *p = s2[i];
        p++;
    }
    *p = '\0';

    return s1;
}

char *cat(char *s1, const char *s2)
{
    char *p = s1;

    while (*(++p))
        ;

    for (int i = 0; s2[i]; i++)
    {
        *p = s2[i];
        p++;
    }
    *p = '\0';

    return s1;
}

int main(void)
{

    char str1[100], str2[100];
    int n;

    printf("Input a string: ");
    scanf("%s", str1);
    printf("Input another string: ");
    scanf("%s", str2);

    printf("The second string concatenated to the first gives: %s\n", cat(str1, str2));

    printf("Input a string: ");
    scanf("%s", str1);
    printf("Input another string: ");
    scanf("%s", str2);
    printf("Input a number from 1 ~ 10: ");
    scanf("%d", &n);

    printf("Concatenating only the first n gives: %s", ncat(str1, str2, n));

    return 0;
}
#include <stdio.h>

int ncmp(char s1[], char s2[], int n)
{
    char *p1 = s1;
    char *p2 = s2;

    int diff = 0;
    for (int i = 0; i < n; i++)
    {
        if (*p1 == *p2)
        {
            p1++;
            p2++;
        }
        else
        {
            diff = *p1 - *p2;
            break;
        }
    }

    return diff;
}

int cmp(char *s1, char *s2)
{
    char *p1 = s1;
    char *p2 = s2;

    while (*p1 == *p2)
    {
        p1++;
        p2++;
    }

    // TODO: This doesn't properly do exact matches.
    return *p1 - *p2;
}

int main(void)
{

    char str1[100], str2[100];
    int n;

    printf("Input a string: ");
    scanf("%s", str1);
    printf("Input another string: ");
    scanf("%s", str2);

    printf("The second string compared to the first gives: %d\n", cmp(str1, str2));

    printf("Input a string: ");
    scanf("%s", str1);
    printf("Input another string: ");
    scanf("%s", str2);
    printf("Input a number from 1 ~ 10: ");
    scanf("%d", &n);

    printf("Comparing only the first n gives: %d", ncmp(str1, str2, n));

    return 0;
}
#include <stdio.h>

char *ncpy(char s1[], const char s2[], int n)
{

    int i = 0;
    do
    {
        s1[i] = s2[i];
    } while (s2[i++]);
    while (i < n)
    {
        s1[i] = '\0';
        i++;
    }
    return s1;
}

char *cpy(char s1[], const char s2[])
{
    int i = 0;
    do
    {
        s1[i] = s2[i];
    } while (s2[i++]);
    return s1;
}

int main(void)
{

    char str1[10], str2[10];
    int n;

    printf("Input a string: ");
    scanf("%s", str1);
    printf("Input another string: ");
    scanf("%s", str2);

    printf("The second string copied to the first gives: %s\n", cpy(str1, str2));

    printf("Input a string: ");
    scanf("%s", str1);
    printf("Input another string: ");
    scanf("%s", str2);
    printf("Input a number from 1 ~ 10: ");
    scanf("%d", &n);

    printf("Copying only the first n gives: %s", ncpy(str1, str2, n));

    return 0;
}
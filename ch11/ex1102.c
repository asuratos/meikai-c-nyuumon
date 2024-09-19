#include <stdio.h>

#define NUM 3

int main(void)
{
    char a[NUM][10];
    char *p[NUM] = {"1lakfj", "lskdjf'", "asdlkfj"};

    for (int i = 0; i < NUM; i++)
    {
        printf("a[%d] : ", i);
        scanf("%s", &a[i]);
    }
    // TODO: This should work but keeps giving a segfault...
    // for (int i = 0; i < NUM; i++)
    // {
    //     printf("p[%d] : ", i);
    //     scanf("%s", p[i]);
    // }

    for (int i = 0; i < NUM; i++)
    {
        printf("a[%d] = %s\n", i, a[i]);
    }
    for (int i = 0; i < NUM; i++)
    {
        printf("p[%d] = %s\n", i, p[i]);
    }
    return 0;
}
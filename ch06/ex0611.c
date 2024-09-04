#include <stdio.h>

#define NUMBER 5

int search_idx(const int v[], int idx[], int key, int len)
{
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (v[i] == key)
        {
            idx[count] = i;
            count++;
        }
    }
    return count;
}

int main(void)
{
    int key, count;
    int v[NUMBER];
    int idx[NUMBER];

    printf("Input %d numbers: \n", NUMBER);
    for (int i = 0; i < NUMBER; i++)
    {
        printf("%d : ", i);
        scanf("%d", &v[i]);
    }

    printf("Search key: ");
    scanf("%d", &key);

    count = search_idx(v, idx, key, NUMBER);
    printf("Found %d of the key.\n", count);
    printf("{ ");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", idx[i]);
    }
    printf("}");

    return 0;
}
#include <stdio.h>

int main(void)
{
    int ch;
    int count = 0;

    printf("Input lines... (End with ^Z)");
    while ((ch = getchar()) != EOF)
    {
        if (ch == '\n')
            count++;
    }

    printf("You input %d newlines.", count);
    return 0;
}
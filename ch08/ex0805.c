#include <stdio.h>

enum space
{
    White,
    Black,
    Empty
};

enum space place(void)
{
    int tmp;
    do
    {
        printf("Place a piece:\n");
        printf("White...0\n");
        printf("Black...1\n");
        printf("Stop....2\n");
        scanf("%d", &tmp);
    } while (tmp < 0 || tmp > 2);
    return tmp;
}

int main(void)
{
    enum space placed;

    do
    {
        switch (placed = place())
        {
        case White:
            printf("You placed a white piece.\n");
            break;
        case Black:
            printf("You placed a black piece.\n");
            break;
        case Empty:
            printf("You did not place a piece.\n");
            break;
        }
    } while (placed != Empty);
    return 0;
}
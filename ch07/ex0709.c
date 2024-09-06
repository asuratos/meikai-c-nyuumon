#include <stdio.h>
#include <math.h>

int main(void)
{
    double area;

    printf("Input area of a square: ");
    scanf("%lf", &area);

    printf("The side length of the square is %f", sqrt(area));
}
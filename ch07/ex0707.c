#include <stdio.h>

int main(void)
{
    float fl;
    double d;
    long double ld;

    printf("Input a Float: ");
    scanf("%f", &fl);
    printf("Input a Double: ");
    scanf("%lf", &d);
    printf("Input a Long Double: ");
    scanf("%lf", &ld); // TODO: Figure out why this doesn't work

    puts("------ Echoing ------");
    printf("float: %.5f\n", fl);
    printf("double: %.5f\n", d);
    printf("long double: %.5f\n", ld);

    return 0;
}
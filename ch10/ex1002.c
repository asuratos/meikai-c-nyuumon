#include <stdio.h>

void decrement_date(int *y, int *m, int *d)
{
    // start of year
    if (*m == 1 && *d == 1)
    {
        (*y)--;
        *m = 12;
        *d = 31;
    }
    else if (*d > 1)
    {
        (*d)--;
    }
    // months AFTER months with 31 days
    else if (*m == 2 || *m == 4 || *m == 6 || *m == 8 || *m == 9 || *m == 11)
    {
        (*m)--;
        *d = 31;
    }
    // months AFTER months with 30 days
    else if (*m == 5 || *m == 7 || *m == 10 || *m == 12)
    {
        (*m)--;
        *d = 30;
    }
    // March
    else
    {
        // leap year
        if (*y % 4 == 0)
        {
            // leap year exception
            if (*y % 100 == 0 && *y % 400 != 0)
            {
                (*m)--;
                *d = 28;
            }
            else
            {
                (*m)--;
                *d = 29;
            }
        }
        // not a leap year
        else
        {
            (*m)--;
            *d = 28;
        }
    }
}

void increment_date(int *y, int *m, int *d)
{
    // end of the year
    if (*m == 12)
    {
        if (*d == 31)
        {
            *d = 1;
            *m = 1;
            (*y)++;
        }
        else
        {
            (*d)++;
        }
    }
    // months with 31 days
    else if (*m == 1 || *m == 3 || *m == 5 || *m == 7 || *m == 8 || *m == 10)
    {
        if (*d <= 30)
        {
            (*d)++;
        }
        else
        {
            *d = 1;
            (*m)++;
        }
    }
    // months with 30 days
    else if (*m == 4 || *m == 6 || *m == 9 || *m == 11)
    {
        if (*d <= 29)
        {
            *d++;
        }
        else
        {
            *d = 1;
            (*m)++;
        }
    }
    // February
    else if (*m == 2)
    {
        if (*d <= 27)
        {
            (*d)++;
        }
        else
        {
            // leap year
            if (*y % 4 == 0)
            {
                // leap year exception
                if (*y % 100 == 0 && *y % 400 != 0)
                {
                    *d = 1;
                    (*m)++;
                }
                else
                {
                    (*d)++;
                }
            }
            // not a leap year
            else
            {
                *d = 1;
                (*m)++;
            }
        }
    }
}

void print_next(int y, int m, int d)
{

    printf("The day after %d/%d/%d is ", y, m, d);
    increment_date(&y, &m, &d);
    printf("%d/%d/%d\n", y, m, d);
}

void print_prev(int y, int m, int d)
{

    printf("The day before %d/%d/%d is ", y, m, d);
    decrement_date(&y, &m, &d);
    printf("%d/%d/%d\n", y, m, d);
}
int main(void)
{
    // leap year
    print_next(2024, 2, 28);
    // leap year exception
    print_next(2100, 2, 28);
    // leap year exception exception
    print_next(2400, 2, 28);
    // end of year
    print_next(2000, 12, 31);
    // end of month(31)
    print_next(2000, 3, 31);
    // end of month(30)
    print_next(2000, 4, 30);

    // leap year
    print_prev(2024, 3, 1);
    // leap year exception
    print_prev(2100, 3, 1);
    // leap year exception exception
    print_prev(2400, 3, 1);
    // start of year
    print_prev(2000, 1, 1);
    // start of month (after 31)
    print_prev(2000, 2, 1);
    // start of month (after 30)
    print_prev(2000, 5, 1);

    return 0;
}
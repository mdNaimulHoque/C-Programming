#include <stdio.h>
#include <stdbool.h>

int main()
{
    int year = 2100;
    bool is_leap_year = (year % 4 == 0) && (year % 100 != 0 || year % 400 == 0);

    if (is_leap_year)
    {
        printf("Leap year");
    }
    else
    {
        printf("Not Leap year");
    }

    return 0;
}
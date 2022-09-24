#include <stdio.h>

int main()
{
    int day, days, month, year;

    printf("Input no. of days: ");
    scanf("%d", &days);

    year = days / 365;
    printf("%d Year(s)\n", year);

    month = (days - year * 365) / 30;
    printf("%d Month(s)\n", month);

    day = days - year * 365 - month * 30;
    printf("%d Day(s)");

    return 0;
}
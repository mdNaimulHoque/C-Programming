#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c)
    {
        printf("This is an equilateral triangle");
    }
    else if (a == b || b == c || c == a)
    {
        printf("This is an isosceles triangle");
    }
    else
    {
        printf("This is an scalene triangle");
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter 3sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    int sum = a + b + c;
    if (a > 0 && b > 0 && c > 0)
    {
        printf("Triangle is valid\n");
    }
    else
    {
        printf("Triangle is not valid\n");
    }

    return 0;
}
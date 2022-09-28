#include <stdio.h>

int main()
{
    float number, fractional;
    int integral;

    printf("Enter Number: ");
    scanf("%f", &number);

    integral = number;
    fractional = number - integral;

    printf("Integer part: %d\n", integral);
    printf("Real part: %f\n", fractional);

    return 0;
}
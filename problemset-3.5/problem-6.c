#include <stdio.h>

int main()
{
    float hours, amount;

    printf("Input the working hrs: ");
    scanf("%f", &hours);

    printf("Salary amount/hr: ");
    scanf("%f", &amount);

    printf("Salary = %.2f", hours * amount);

    return 0;
}
#include <stdio.h>

int main()
{
    int celcius;
    float fahrenheit;

    printf("Enter temperature in Celsius = ");
    scanf("%d", &celcius);

    fahrenheit = (celcius * 9 / 5) + 32;
    printf("Temperature in Fahrenheit = %.1f F", fahrenheit);

    return 0;
}
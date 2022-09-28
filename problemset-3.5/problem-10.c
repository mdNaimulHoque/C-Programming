#include <stdio.h>

int main()
{
    float item1, item2, no_item1, no_item2, average;

    printf("Weight - Item1: ");
    scanf("%f", &item1);

    printf("No. of item1: ");
    scanf("%f", &no_item1);

    printf("Weight - Item2: ");
    scanf("%f", &item2);

    printf("No. of item2: ");
    scanf("%f", &no_item2);

    average = (item1 * no_item1 + item2 * no_item2) / (no_item1 + no_item2);
    printf("Average Value = %f", average);

    return 0;
}
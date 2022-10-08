#include <stdio.h>

int main()
{
    int ara[6] = {2, 1, 0, -5, 10, 5};
    int sum = 0;

    for (int i = 0; i < 6; i++)
    {
        int value = ara[i];
        sum += value;
    }

    int min = ara[0], max = ara[0];
    for (int i = 1; i < 6; i++)
    {
        int value = ara[i];
        if (value < min)
            min = value;
        if (value > max)
            max = value;
    }

    // printf("%d\n", sum);
    printf("sum -> %d, min -> %d, max -> %d\n", sum, min, max);
    // array reversed
    for (int i = 5; i >= 0; i--)
    {
        printf("%d ", ara[i]);
    }

    return 0;
}
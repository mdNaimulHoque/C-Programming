#include <stdio.h>

int main()
{

    int sum = 0;
    for (int i = 50; i > 30; i--)
    {
        sum += i;
    }

    printf("Sum = %d\n", sum);

    return 0;
}
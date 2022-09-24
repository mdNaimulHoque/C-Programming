#include <stdio.h>

int main()
{
    int i = 1, num = 29;
    int sum = 0;

    while (i <= num)
    {
        sum += i;
        i += 2;
    }
    printf("%d\n", sum);
}
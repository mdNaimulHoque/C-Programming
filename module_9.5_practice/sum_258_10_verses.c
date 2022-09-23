#include <stdio.h>

int main()
{
    int i = 1, j = 1, num = 10;
    int sum = 0;
    int count = 0;

    while (j <= 10)
    {
        sum += i;
        i += 3;
        j++;
        count++;
    }
    printf("%d %d\n", sum, count);
}
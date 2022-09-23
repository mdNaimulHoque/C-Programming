#include <stdio.h>

int main()
{
    int i = 1, num = 100;
    int sum = 0;
    while (i <= num)
    {
        sum += i;
        i++;
    }
    printf("%d\n", sum);
}
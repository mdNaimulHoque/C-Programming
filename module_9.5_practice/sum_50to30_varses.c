#include <stdio.h>

int main()
{
    int i = 50, num = 30;
    int sum = 0;

    while (i > num)
    {
        sum += i;
        i--;
    }
    printf("%d\n", sum);
}
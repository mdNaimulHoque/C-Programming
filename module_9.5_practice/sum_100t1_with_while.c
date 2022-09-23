#include <stdio.h>

int main()
{
    int i = 100, num = 1;
    int sum = 0;
    int count = 0;

    while (i >= num)
    {
        sum += i;
        i--;
        count++;
    }
    printf("sum = %d count= %d\n", sum, count);
}
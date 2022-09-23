#include <stdio.h>

int main()
{
    int num = 60;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            continue;
        }
        printf("%d ", i);
    }

    return 0;
}
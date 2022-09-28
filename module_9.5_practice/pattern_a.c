#include <stdio.h>

int main()
{
    int i = 1, num = 4, j = 1;

    while (i <= num)
    {
        i++;
        while (j <= i)
        {
            printf("%d ", i);
            j++;
        }

        printf("\n");
    }
}
#include <stdio.h>

int main()
{
    int i = 1, j = 9;
    for (; i <= j; i++, j--)
    {
        printf("%d %d\n", i, j);
    }

    printf("at the end %d %d\n", i, j);

    return 0;
}
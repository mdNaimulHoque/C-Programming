#include <stdio.h>

int main()
{
    int ara[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ara[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", ara[i]);
    }

    return 0;
}
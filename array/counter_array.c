#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ara[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

    int count[11] = {0};
    for (int i = 0; i < n; i++)
    {
        int value = ara[i];
        count[value]++;
    }

    for (int value = 0; value <= 10; value++)
    {
        if (count[value] > 0)
            printf("value-> %d, count = %d\n", value, count[value]);
    }

    // printf("%d\n", count);

    return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ara[n];

    memset(ara, 0, sizeof(ara));
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ara[i]);
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int x;
    do
    {
        scanf("%d", &x);
    } while (x % 2 != 0);
    printf("%d\n", x);

    return 0;
}
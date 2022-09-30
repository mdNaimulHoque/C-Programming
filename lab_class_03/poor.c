#include <stdio.h>

int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    if (x == y && y == z)
        printf("No\n");
    else if (x != y && y != z && x != z)
        printf("No\n");
    else
        printf("Yes\n");

    return 0;
}
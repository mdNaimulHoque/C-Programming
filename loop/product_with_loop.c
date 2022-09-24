#include <stdio.h>

int main()
{
    int n;
    printf("enter number of product\n");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += 2 * i;
        printf("%d %d\n", i, sum);
    }
    printf("final sum of product %d\n", sum);

    return 0;
}
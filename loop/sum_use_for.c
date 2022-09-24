#include <stdio.h>

int main()
{
    int n;
    printf("enter the iteration of loop\n");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
        printf("i = %d sum = %d\n", i, sum);
    }

    printf("Final Sum = %d\n", sum);

    return 0;
}
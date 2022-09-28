#include <stdio.h>

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int cube = i * i * i;
        printf("Number is: %d and cube of the %d is: %d\n", i, i, cube);
    }

    return 0;
}
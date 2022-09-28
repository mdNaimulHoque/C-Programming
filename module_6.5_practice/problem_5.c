#include <stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);

        if (num % 2 == 0)
        {
            sum += num;
        }
    }
    printf("Sum of even integers: %d\n", sum);

    return 0;
}
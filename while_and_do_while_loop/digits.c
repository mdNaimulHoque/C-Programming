#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int reversed = 0;
    while (n > 0)
    {
        int digit = n % 10;
        n /= 10;
        reversed = reversed * 10 + digit;
        // printf("rev = %d, digit = %d\n", reversed, digit);
    }

    printf("reversed = %d\n", reversed);

    return 0;
}
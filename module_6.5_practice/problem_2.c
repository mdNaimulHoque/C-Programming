#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter number: ");
    scanf("%d %d", &a, &b);

    if (a == 5 || b == 5 || a + b == 5 || a / b == 5)
    {
        printf("true");
    }

    else
    {
        printf("false");
    }

    return 0;
}
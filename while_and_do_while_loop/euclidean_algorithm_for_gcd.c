#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    while (a != 0)
    {
        int reminder = b % a;
        b = a;
        a = reminder;
        printf("%d %d\n", a, b);
    }

    printf("%d\n", b);
    return 0;
}
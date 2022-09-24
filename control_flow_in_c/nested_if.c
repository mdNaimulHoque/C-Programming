#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    if (b != 0)
    {
        printf("Reminder is %d\n", a % b);
        if (a % b == 0)
        {
            printf("%d divisible by %d\n", a, b);
        }

        else
        {
            printf("%d not divisible by %d\n", a, b);
        }
    }

    else
    {
        printf("You conn't divide by 0\n");
    }

    return 0;
}
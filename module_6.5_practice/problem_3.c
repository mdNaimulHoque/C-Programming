#include <stdio.h>

int main()
{
    int a;
    printf("Enter number: ");
    scanf("%d", &a);

    if (a % 3 == 0 && a % 7 == 0)
    {
        printf("no\n");
    }
    else
    {
        printf("yes\n");
    }

    return 0;
}
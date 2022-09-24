#include <stdio.h>

int main()
{
    int num;
    do
    {
        printf("Enter 0/1: ");
        scanf("%d", &num);
        if (num == 0)
            printf("You enter 0\n");
        else if (num == 1)
            printf("You enter 1\n");
        else
            printf("Try Again\n");

    } while (!(num == 0 || num == 1));

    return 0;
}
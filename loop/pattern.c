#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    printf("*****************\n");
    for (int i = 0; i < n; i++)
    {
        printf("*               *\n");
    }
    printf("*****************\n");

    return 0;
}
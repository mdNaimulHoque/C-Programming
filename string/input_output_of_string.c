#include <stdio.h>

int main()
{
    char ara[14];
    fgets(ara, 14, stdin);
    ara[6] = '\0';
    printf("%s", ara);

    return 0;
}
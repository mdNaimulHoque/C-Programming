#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    scanf("%s %s", &a, &b);
    int value = strcmp(a, b);

    printf("%d", value);

    return 0;
}
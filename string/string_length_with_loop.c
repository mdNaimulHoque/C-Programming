#include <stdio.h>

int main()
{
    char ara[100];
    scanf("%s", &ara);

    int index = 0;
    while (ara[index] != '\0')
    {
        index++;
    }
    /* with for loop */
    // int index;
    // for (index = 0; ara[index] != '\0'; index++)
    // {
    // }
    printf("%d", index);

    return 0;
}
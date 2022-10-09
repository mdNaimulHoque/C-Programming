#include <stdio.h>
#include <string.h>

int main()
{
    char ara[100];
    scanf("%s", &ara);

    int counter[26] = {0};
    for (int i = 0; i < strlen(ara); i++)
    {
        char value = ara[i];
        counter[value - 'a']++;
    }

    for (char value = 'a'; value <= 'z'; value++)
    {
        if (counter[value - 'a'] > 0)
        {
            printf("value->%c count->%d\n", value, counter[value - 'a']);
        }
    }

    return 0;
}
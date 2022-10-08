#include <stdio.h>

int main()
{
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);
    int ara[size];
    printf("Enter value: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &ara[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", ara[i]);
    }

    return 0;
}
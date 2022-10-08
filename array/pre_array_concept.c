#include <stdio.h>

int main()
{
    int n = 10;
    int note;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &note);
        if (note == 100)
        {
            count++;
        }
    }
    printf("note - %d count - %d", note, count);

    return 0;
}
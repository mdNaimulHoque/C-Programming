#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a + b;
    printf("%d ", sum);

    int difference = a - b;
    printf("%d\n", difference);

    float c, d;
    scanf("%f %f", &c, &d);
    printf("%.1f %.1f", c + d, c - d);

    return 0;
}
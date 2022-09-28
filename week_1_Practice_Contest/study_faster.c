#include <stdio.h>

int main()
{
    int T, X;
    scanf("%d %d", &T, &X);

    double ans = (double)T / X;

    printf("%lf", ans);

    return 0;
}
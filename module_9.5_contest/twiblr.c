#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int follower_limit = 2 * a + 100;

    int extra_follow = follower_limit - b;

    printf("%d\n", extra_follow);

    return 0;
}
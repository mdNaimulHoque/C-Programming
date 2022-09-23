#include <stdio.h>
#include <limits.h>

int main()
{
    printf("int datatype range: \n");
    printf("%d\n", INT_MAX);
    printf("%d\n", INT_MIN);

    printf("short int datatype range: \n");
    printf("%d\n", SHRT_MAX);
    printf("%d\n", SHRT_MIN);

    printf("long long int datatype range: \n");
    printf("%lld\n", LONG_MAX);
    printf("%lld\n", LONG_MIN);
    return 0;
}
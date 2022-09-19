#include <stdio.h>

int main()
{
    int num;
    printf("Enter Your Number: ");
    scanf("%d", &num);

    if (num >= 80 && num <= 100)
    {
        printf("A+");
    }
    if (num >= 70 && num <= 79)
    {
        printf("A");
    }
    if (num >= 60 && num <= 69)
    {
        printf("B");
    }
    if (num >= 50 && num <= 59)
    {
        printf("C");
    }
    if (num >= 40 && num <= 49)
    {
        printf("D");
    }
    if (num >= 0 && num < 40)
    {
        printf("F");
    }

    return 0;
}

/*
    80-100: A+
    70-79: A
    60-69: B
    50-59: C
    40-49: D
    0-40: F

*/
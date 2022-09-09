#include <stdio.h>

int main()
{
    int english_marks, math_marks, total;

    printf("Enter your English marks = ");
    scanf("%d", &english_marks);

    printf("Enter your Math marks = ");
    scanf("%d", &math_marks);

    total = english_marks + math_marks;
    printf("Total marks = %d", total);

    float pi;

    printf("Enter the Pi value = ");
    scanf("%f", &pi);
    printf("Pi = %f", pi);

    return 0;
}


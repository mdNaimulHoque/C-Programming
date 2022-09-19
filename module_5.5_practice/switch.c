#include <stdio.h>

int main()
{
    int a, b;
    char op;

    scanf("%d %c %d", &a, &op, &b);

    switch (op)
    {
    case '+':
        printf("%d", a + b);
        break;
    case '-':
        printf("%d", a - b);
        break;
    case '*':
        if (!(b == 0))
        {
            printf("%d", a * b);
        }
        else
        {
            printf("Can't product by 0\n");
        }
        break;
    case '/':
        if (!(b == 0))
        {
            printf("%d", a / b);
        }
        else
        {
            printf("Can't divide by 0\n");
        }

        break;
    case '%':
        if (!(b == 0))
        {
            printf("%d", a % b);
        }
        else
        {
            printf("Can't modulus by 0\n");
        }

        break;

    default:
        printf("Your operator is known.\n");
        break;
    }
    return 0;
}
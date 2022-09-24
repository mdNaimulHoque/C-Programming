#include <stdio.h>

int main()
{
    int money = 0, target = 100;

    while (money < target)
    {
        printf("Need more money. Enter amount: ");
        int given;
        scanf("%d", &given);
        money += given;
        printf("Current money: %d\n", money);
    }

    return 0;
}
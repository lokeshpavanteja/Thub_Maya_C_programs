#include <stdio.h>

int main() {
    int X, Y, Z;
    int totalMoney, chocolates;

    scanf("%d", &X);
    scanf("%d", &Y);
    scanf("%d", &Z);

    totalMoney = (X * 5) + (Y * 10);

    chocolates = totalMoney / Z;

    printf("%d", chocolates);

    return 0;
}

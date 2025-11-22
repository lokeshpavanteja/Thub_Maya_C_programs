#include <stdio.h>
#include <math.h>

int main() {
    int x, y, M;
    long long power, result;

    scanf("%d %d %d", &x, &y, &M);

    power = pow(x, y);

   result = power % M;

    printf("%lld", result);

    return 0;
}

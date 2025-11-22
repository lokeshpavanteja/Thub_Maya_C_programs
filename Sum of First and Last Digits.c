#include <stdio.h>
int main()
 {
    int N, first, last;
    scanf("%d", &N);
    last = N % 10;      
    while (N >= 10) {
        N = N / 10;
    }
    first = N;
    printf("%d", first + last);
    return 0;
}

#include <stdio.h>

int main() 
{
    float Basic, DA, HRA, gross;

    scanf("%f", &Basic);

    if (Basic <= 10000) {
        DA = 0.80 * Basic;
        HRA = 0.20 * Basic;
    }
    else if (Basic <= 20000) {
        DA = 0.90 * Basic;
        HRA = 0.25 * Basic;
    }
    else {
        DA = 0.95 * Basic;
        HRA = 0.30 * Basic;
    }

    gross = Basic + DA + HRA;

    printf("%.2f", gross);

    return 0;
}

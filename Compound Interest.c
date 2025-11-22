#include<stdio.h>
int main()
{
    float P,R,T,C,A;
    scanf("%f%f%f%f%f",&P,&R,&T,&C,&A);
    A=P*pow(1+(R/100),T);
    C=A-P;
    printf("%.2f",C);
    return 0;
}
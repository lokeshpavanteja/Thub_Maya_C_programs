#include<stdio.h>
int main()
{
    float CP,SP,loss,lp;
    scanf("%f%f",&CP,&SP);
    loss=CP-SP;
    lp=(loss/CP)*100;
    printf("%.2f
",lp);
    return 0;
}
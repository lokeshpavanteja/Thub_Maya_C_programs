#include<stdio.h>
int main()
{
    float CP,SP,p,pp;
    scanf("%f%f%f%f",&CP,&SP,&p,&pp);
    p=SP-CP;
    pp=(p/CP)*100;
    printf("%.2f
",pp);
    return 0;
}
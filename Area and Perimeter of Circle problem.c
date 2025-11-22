#include<stdio.h>
int main()
{
    int r;
    float a,p;
    const float pi=3.14;
    scanf("%d",&r);
    a=pi*r*r;
    p=2*pi*r;
    printf("%.2f
",a);
    printf("%.2f
",p);
    return 0;
}
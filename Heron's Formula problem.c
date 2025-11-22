#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,s,area;
    scanf("%lf%lf%lf",&a,&b,&c);

    if(a+b>c&&a+c>b&&b+c>a)
    {
        s=(a+b+c)/2.0;
        area=sqrt(s*(s-a)*(s-b)*(s-c));

    } 
    else
    {
        area=0.0;
    }
    printf("%.4lf
",area);
    return 0;
}
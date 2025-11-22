#include<stdio.h>
#include<math.h>
int main()
{
    double R,v;
    const double PI=3.14;
    scanf("%lf",&R);
    v=(4.0/3.0)*PI*pow(R,3);
    printf("%.2lf
",v);
    return 0;
}
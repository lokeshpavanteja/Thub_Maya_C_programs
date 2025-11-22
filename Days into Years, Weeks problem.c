#include<stdio.h>
int main()
{
    int D,y,w;
    scanf("%d%d%d",&D,&y,&w);

    y=D/365;
    w=(D%365)/7;

    printf("%d",y);
    printf("%d",w);
    return 0;
}
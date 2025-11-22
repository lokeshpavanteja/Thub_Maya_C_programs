#include<stdio.h>
int main()
{
    int x1,y1,x2,y2;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    double distance;
    distance=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    printf("%.4lf",distance);
    return 0;
}
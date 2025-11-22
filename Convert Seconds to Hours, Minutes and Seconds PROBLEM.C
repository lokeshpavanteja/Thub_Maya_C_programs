#include<stdio.h>
int main()
{
    int o,H,M,S;
    scanf("%d%d%d%d",&o,&H,&M,&S);
    H=o/3600;
    M=(o%3600)/60;
    S=o%60;
    printf("H:M:S-%d:%d:%d",H,M,S);
    return 0;
}
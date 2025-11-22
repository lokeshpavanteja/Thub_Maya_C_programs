#include<stdio.h>
int main()
{
    int X,Y;
    scanf("%d%d",&X,&Y);
    int m=5*X;
    if (m>=Y)
    printf("YES");
    else
    printf("NO");
    return 0;
}
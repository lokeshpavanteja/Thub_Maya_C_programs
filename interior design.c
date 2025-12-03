#include<stdio.h>
int main()
{
    int X1,Y1,X2,Y2;
    scanf("%d%d%d%d",&X1,&Y1,&X2,&Y2);
    int c1=X1+Y1;
    int c2=X2+Y2;
    if(c1<c2){
        printf("%d",c1);

    }
    else{
        printf("%d",c2);
    }
    return 0;
}
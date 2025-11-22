#include<stdio.h>
int main()
{
    int T,S,B,C,Ckb;
    scanf("%d%d%d",&T,&S,&B);
    C=2*T*S*B*512;
    Ckb=C/1024;
    printf("%d KB
",Ckb);
    return 0;
}
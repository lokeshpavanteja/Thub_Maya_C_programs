#include<stdio.h>
int main()
{
    int A,B;
    scanf("%d%d",&A,&B);
    int sum=A+B;
    int pro=A*B;
    int diff= abs(sum-pro);
    printf("%d",diff);
    return 0;
}
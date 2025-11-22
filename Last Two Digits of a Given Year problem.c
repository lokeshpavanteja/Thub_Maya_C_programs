#include<stdio.h>
int main()
{
    int year;
    scanf("%d",&year);
    int syear =year % 100;
    printf("%02d",syear);
    return 0;
}
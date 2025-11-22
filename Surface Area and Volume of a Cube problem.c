#include<stdio.h>
int main()
{
    int side,Surface_area,Volume;
    scanf("%d%d%d",&side,&Surface_area,&Volume);
    Surface_area=6*side*side;
    Volume=side*side*side;
    printf("Surface area = %d and Volume = %d",Surface_area,Volume);
    return 0;
}
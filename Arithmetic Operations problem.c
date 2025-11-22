#include<stdio.h>
int main()
{
    int num1,num2,Sum,Difference,Product,Quotient,Remainder;
    scanf("%d%d%d%d%d%d%d",&num1,&num2,&Sum,&Difference,&Product,&Quotient,&Remainder);
    Sum=num1+num2;
    Difference=num1-num2;
    Product=num1*num2;
    Quotient=num1/num2;
    Remainder=num1%num2;
    printf("Sum:%d
",Sum);
    printf("Difference:%d
",Difference);
    printf("Product:%d
",Product);
    printf("Quotient:%d
",Quotient);
    printf("Remainder:%d
",Remainder);
    return 0;
}
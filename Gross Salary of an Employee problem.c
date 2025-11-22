#include <stdio.h>

int main() 
{
    float salary, hra, da, pf, gross;
    scanf("%f", &salary);
    scanf("%f", &hra);
    scanf("%f", &da);   
    if (salary >= 20000 && salary <= 1000000 && hra == da)
     {
        pf = 0.12 * salary;
        gross = salary + hra + da + pf;
        printf("%.2f\n", pf);
        printf("%.2f\n", gross);  
    }
     else 
    {
        printf("Invalid Input");
    }
    return 0;
}

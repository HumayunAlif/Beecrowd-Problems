#include<stdio.h>
int main()
{
    char name;
    double salary, totalSales, finalSalary;
    scanf("%s %lf %lf",&name, &salary, &totalSales);
    finalSalary = salary + (0.15 * totalSales);
    printf("TOTAL = R$ %.2lf\n", finalSalary);
    return 0;
}

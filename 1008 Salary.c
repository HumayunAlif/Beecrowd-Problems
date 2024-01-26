#include <stdio.h>

int main()
{
    int employeeNumber, workedHours;
    float amountPerHour, salary;
    scanf("%d %d %f", &employeeNumber, &workedHours, &amountPerHour);
    salary = workedHours * amountPerHour;
    printf("NUMBER = %d\n", employeeNumber);
    printf("SALARY = U$ %.2f\n", salary);

    return 0;
}

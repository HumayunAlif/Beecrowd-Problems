#include<stdio.h>
int main()
{
    int time,A_speed;
    double distance,fuel_needed;
    scanf("%d%d",&time,& A_speed);
    distance = (time*A_speed);
    fuel_needed = distance/12;
    printf("%.3lf\n",fuel_needed);
    return 0;
}

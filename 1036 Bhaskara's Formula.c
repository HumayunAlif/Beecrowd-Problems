#include<stdio.h>
int main()
{
    double A,B,C;
    scanf("%lf%lf%lf",&A,&B,&C);
    double calculation = B*B - 4* A* C;
    if (A==0 || calculation<0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
    double root1 = (-B + sqrt(calculation))/(2 * A);
    double root2 = (-B - sqrt(calculation))/(2 * A);
    printf("R1 = %.5lf\n",root1);
    printf("R2 = %.5lf\n",root2);
    }
    return 0;
}

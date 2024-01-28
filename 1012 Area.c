#include<stdio.h>
#define PI 3.14159
int main()
{
    double A,B,C;
    scanf("%lf%lf%lf",&A,&B,&C);
    double T_area =(0.5)*A*C;
    printf("TRIANGULO: %.3lf\n",T_area);
    double Ra_area = PI*C*C;
    printf("CIRCULO: %.3lf\n",Ra_area);
    double TP_area = 0.5*(A+B)*C;
    printf("TRAPEZIO: %.3lf\n",TP_area);
    double SQ_area = B*B;
    printf("QUADRADO: %.3lf\n",SQ_area);
    double RE_area = A*B;
    printf("RETANGULO: %.3lf\n", RE_area);

    return 0;
}

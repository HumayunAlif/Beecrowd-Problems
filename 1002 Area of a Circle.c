#include<stdio.h>
int main()
{
    double A, R;
    scanf("%lf",&R);
    const double n = 3.14159;
    A = n*R*R;
    printf("A=%.4lf\n", A);
    return 0;
}

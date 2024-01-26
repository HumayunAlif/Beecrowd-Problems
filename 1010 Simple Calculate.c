#include<stdio.h>
int main()
{
    int code1, quantity1;
    float price1;
    int code2, quantity2;
    float price2;
    scanf("%d %d %f",&code1,&quantity1,&price1);
    scanf("%d %d %f",&code2,&quantity2,&price2);
    float total_amount = (quantity1*price1)+(quantity2*price2);
    printf("VALOR A PAGAR: R$ %.2f\n",total_amount);

    return 0;
}

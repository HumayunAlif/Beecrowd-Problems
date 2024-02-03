#include<stdio.h>
int main()
{
    int AgeInDays,Days,Months,Years;
    scanf("%d", &AgeInDays);
    Years = AgeInDays/365;
    Months = (AgeInDays%365)/30;
    Days = (AgeInDays%365)%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",Years,Months,Days);

    return 0;
}

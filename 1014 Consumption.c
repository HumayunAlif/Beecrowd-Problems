#include<stdio.h>
int main()
{
   int X;
   float Y;
   scanf("%d %f",&X,&Y);
   float Average_comsumption = X/Y;
   printf("%.3f km/l\n",Average_comsumption);
    return 0;
}

#include<stdio.h>
int main()
{
   double R,Value;
   double pi= 3.14159;
   scanf("%lf",&R);
   Value = (4.0/3)*pi*R*R*R;
   printf("VOLUME = %.3lf\n",Value);
   return 0;
}

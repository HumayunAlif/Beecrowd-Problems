#include<stdio.h>
int main()
{
   int value, i,banknotes[]= {100,50,20,10,5,2,1};
   scanf("%d",&value);
   printf("%d\n", value);
   for (i=0; i<7; ++i)
   {
       printf("%d nota(s) de R$ %d,00\n", value/banknotes[i],banknotes[i]);
       value %= banknotes[i];

   }
   return 0;
}

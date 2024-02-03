#include<stdio.h>
int main()
{
   int Seconds,Minutes,Hours;
   scanf("%d",&Seconds);
   Hours = Seconds/3600;
   Minutes =(Seconds%3600)/60;
   Seconds =  Seconds%60;
   printf("%d:%d:%d\n",Hours,Minutes,Seconds);
   return 0;

}

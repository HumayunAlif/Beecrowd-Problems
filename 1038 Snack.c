#include<stdio.h>
int main()
{
    int i,validcode, productcode[]={1,2,3,4,5};
    double totalprice,itemprice[]= {4.00,4.50,5.00,2.00,1.50};
    int X,Y;
    scanf("%d%d",&X,&Y);

      for (i=0 ; i<5; i++)
        {
            if (X == productcode[i])
            {
            validcode = 1;
            totalprice = itemprice[i]* Y;
            break;
            }
        }
        if (validcode)
            {
                printf("Total: R$ %.2lf\n",totalprice);

            }


   return 0;

}

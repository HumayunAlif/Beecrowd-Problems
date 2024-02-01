#include<stdio.h>
int main()
{
    int a,b,s, max;
    scanf("%d%d%d",&a,&b,&s);
    if (a > b && a > s){
        max = a;
    }
    else if (b > s){
        max = b;
    }
    else{
        max = s;
    }
    printf("%d eh o maior\n",max);

    return 0;
}

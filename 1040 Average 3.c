#include<stdio.h>
int main()
{
float N1,N2,N3,N4,N5,average2;
scanf("%f%f%f%f",&N1,&N2,&N3,&N4);
float Average1 = (N1*2 + N2*3 + N3*4 + N4*1)/(2+3+4+1);
printf("Media: %.1f\n", Average1);
if (Average1 >= 7.0)
{
    printf("Aluno aprovado.\n");
}
else if (Average1 < 5.0)
{
     printf("Aluno reprovado.\n");
}
else
{
  printf("Aluno em exame.\n");
  scanf("%f",&N5);
  printf("Nota do exame: %.1f\n", N5);

  average2 = (Average1 + N5) / 2;

if (average2 >= 5.0)
{
    printf("Aluno aprovado.\n");
}
else
{
    printf("Aluno reprovado.\n");
}


printf("Media final: %.1f\n",average2);
}
return 0;
}

/*URI 43 Tri�ngulo
Leia 3 valores reais (A, B e C) e verifique se eles formam ou n�o um tri�ngulo. Em caso positivo, calcule o per�metro do tri�ngulo e apresente a mensagem:
Perimetro = XX.X
Em caso negativo, calcule a �rea do trap�zio que tem A e B como base e C como altura, mostrando a mensagem
Area = XX.X
Entrada
A entrada cont�m tr�s valores reais.
Sa�da
O resultado deve ser apresentado com uma casa decimal.
*/
#include <stdio.h>
#include <stdlib.h>
int main ( )
{ 
    float A,B,C,per,ar;
    
scanf("%f %f %f",&A,&B,&C);

if(A+B>C && B+C>A && A+C>B)
{
  per = (A+B+C);          
printf("Perimetro = %.1f\n",per);
}
else{
      ar=.5*(A+B)*C;
                  printf("Area = %.1f\n",ar); 
                  }
                 system("pause");
     }


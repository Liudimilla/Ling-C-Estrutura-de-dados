/*URI Online Judge | 1048 Aumento de Sal�rio
A empresa ABC resolveu conceder um aumento de sal�rios a seus funcion�rios de acordo com a tabela abaixo:
Leia o sal�rio do funcion�rio e calcule e mostre o novo sal�rio, bem como o valor de reajuste ganho e o �ndice reajustado, em percentual.
Entrada
A entrada cont�m apenas um valor de ponto flutuante, com duas casas decimais.
Sa�da
Imprima 3 linhas na sa�da: o novo sal�rio, o valor ganho de reajuste e o percentual de reajuste ganho, conforme exemplo abaixo.
*/
#include <stdio.h>
#include <stdlib.h>
int main ( )
{
    double sal,sal2,rea;
    
    scanf("%lf",&sal);
if(sal<=400.00)
{
 sal2=sal*1.15; 
 rea=sal2-sal;
 printf("Novo salario: %.2lf\n",sal2);
  printf("Reajuste ganho: %.2lf\n",rea); 
  printf("Em percentual: 15 %%\n");
}
  
 else if(sal<=800.00)
 {
       sal2=sal*1.12; 
       rea=sal2-sal;
       printf("Novo salario: %.2lf\n",sal2);
        printf("Reajuste ganho: %.2lf\n",rea); 
        printf("Em percentual: 12 %%\n");
        }
 else if(sal<=1200.00)
 {
       sal2=sal*1.10;
        rea=sal2-sal; 
        printf("Novo salario: %.2lf\n",sal2);
        printf("Reajuste ganho: %.2lf\n",rea);
         printf("Em percentual: 10 %%\n");
         }
 else if(sal<=2000.00)
 {
       sal2=sal*1.07;
       rea=sal2-sal;
        printf("Novo salario: %.2lf\n",sal2);
        printf("Reajuste ganho: %.2lf\n",rea);
          printf("Em percentual: 7 %%\n");
          }
else if(sal<=2.000)
{
                    sal2=sal*1.04;
                     rea=sal2-sal;
                     printf("Novo salario: %.2lf\n",sal2); 
                     printf("Reajuste ganho: %.2lf\n",rea);
                      printf("Em percentual: 4 %%\n");
                      }
 system("pause");
     }    
    

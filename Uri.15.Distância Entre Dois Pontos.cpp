/*Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1,y1) e p2(x2,y2) e calcule a dist�ncia 
entre eles, mostrando 4 casas decimais ap�s a v�rgula, segundo a f�rmula:
Entrada
O arquivo de entrada cont�m duas linhas de dados. A primeira linha cont�m dois valores de ponto flutuante: 
 x1 y1 e a segunda linha cont�m dois valores de ponto flutuante x2 y2.
Sa�da
Calcule e imprima o valor da dist�ncia segundo a f�rmula fornecida, com 4 casas ap�s o ponto decimal.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main ( )
{
     float x1,x2,y1,y2,p1,p2,p3;
     scanf("%f %f",&x1,&y1);
     scanf("%f %f",&x2,&y2);
     p1=((x2-x1)*(x2-x1));
     p2=((y2-y1)*(y2-y1));
     p3=sqrt(p1+p2);
     printf("%.4f\n",p3 );
     
     
     system("pause");
     }
     
     
     

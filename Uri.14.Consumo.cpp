/*Calcule o consumo m�dio de um autom�vel sendo fornecidos a dist�ncia total percorrida (em Km) e o total de combust�vel gasto (em litros).
Entrada
O arquivo de entrada cont�m dois valores: um valor inteiro X representando a dist�ncia total percorrida (em Km), e um valor real Y
 representando o total de combust�vel gasto, com um d�gito ap�s o ponto decimal.
Sa�da
Apresente o valor que representa o consumo m�dio do autom�vel com 3 casas ap�s a v�rgula, seguido da mensagem "km/l"
*/
#include <stdio.h>
#include <stdlib.h>

main ( )
{
     int X;
     float Y,csm;
     scanf("%d %f",&X,&Y);
     
     csm=(X/Y);
     
     printf("%.3lf km/l\n",csm );
     
     system("pause");
     }
     
     

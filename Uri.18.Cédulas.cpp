/*Leia um valor inteiro. A seguir, calcule o menor n�mero de notas poss�veis (c�dulas) no qual o valor pode ser decomposto. As notas 
consideradas s�o de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre o valor lido e a rela��o de notas necess�rias.
Entrada
O arquivo de entrada cont�m um valor inteiro N (0 < N < 1000000).
Sa�da
Imprima o valor lido e, em seguida, a quantidade m�nima de notas de cada tipo necess�rias, conforme o exemplo fornecido. 
N�o esque�a de imprimir o fim de linha ap�s cada linha, caso contr�rio seu programa apresentar� a mensagem: �Presentation Error�
*/

#include<stdio.h>

#include <stdlib.h>
 
int main( ){
 
    int qt,c_100,c_50,c_20,c_10,c_5,c_2,c1,c2,c3,c4,c5,c6;
    scanf("%d",&qt);
 
    c_100= qt/100;
     c1=qt%100;
     c_50= c1/50;
     c2=c1%50;
     c_20= c2/20;
     c3=c2%20;
     c_10= c3/10;
     c4=c3%10;
      c_5= c4/5;
     c5=c4%5;
      c_2= c5/2;
     c6=c5%2;
    printf ("%d\n",qt); 
    printf ("%d nota(s) de R$ 100,00\n",c_100);
    printf ("%d nota(s) de R$ 50,00\n",c_50);
    printf ("%d nota(s) de R$ 20,00\n",c_20);
    printf ("%d nota(s) de R$ 10,00\n",c_10);
    printf ("%d nota(s) de R$ 5,00\n",c_5);
    printf ("%d nota(s) de R$ 2,00\n",c_2);
    printf ("%d nota(s) de R$ 1,00\n",c6);

          system("pause");
     }

         
         

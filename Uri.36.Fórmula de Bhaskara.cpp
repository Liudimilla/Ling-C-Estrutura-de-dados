/*Leia 3 valores de ponto flutuante e efetue o c�lculo das ra�zes da equa��o de Bhaskara. Se n�o for poss�vel calcular as ra�zes, 
mostre a mensagem correspondente �Impossivel calcular�, caso haja uma divis�o por 0 ou raiz de numero negativo.
Entrada
Leia tr�s valores de ponto flutuante (double) A, B e C.
Sa�da
Se n�o houver possibildade de calcular as ra�zes, apresente a mensagem "Impossivel calcular". Caso contr�rio, imprima 
o resultado das ra�zes com 5 d�gitos ap�s o ponto, com uma mensagem correspondente conforme exemplo abaixo. Imprima sempre o
 final de linha ap�s cada mensagem.
*/
#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()

{

    double A,B,C,res1,res2,bask;

    scanf("%lf %lf %lf",&A,&B,&C);

    bask=(B*B)-(4*A*C);

    res1=(-B+sqrt(bask))/(2*A);

    res2=(-B-sqrt(bask))/(2*A);

    if(A!=0 && bask>0)

    {

        printf("R1 = %.5lf\nR2 = %.5lf\n",res1,res2);

    }

    else printf("Impossivel calcular\n");


    system("pause")

}

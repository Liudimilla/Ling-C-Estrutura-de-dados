/*Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara. Se não for possível calcular as raízes, 
mostre a mensagem correspondente “Impossivel calcular”, caso haja uma divisão por 0 ou raiz de numero negativo.
Entrada
Leia três valores de ponto flutuante (double) A, B e C.
Saída
Se não houver possibildade de calcular as raízes, apresente a mensagem "Impossivel calcular". Caso contrário, imprima 
o resultado das raízes com 5 dígitos após o ponto, com uma mensagem correspondente conforme exemplo abaixo. Imprima sempre o
 final de linha após cada mensagem.
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

/*URi1060N�meros Positivos
Fa�a um programa que leia 6 valores. Estes valores ser�o somente negativos ou positivos (desconsidere os valores nulos). A seguir,
 mostre a quantidade de valores positivos digitados.
Entrada
Seis valores, negativos e/ou positivos.
Sa�da
Imprima uma mensagem dizendo quantos valores positivos foram lidos.
*/
#include <stdio.h>
#include <stdlib.h>
int main ( )
{
    int i, pos=0;
     float num; 
     for(i=1;i<=6;i++){ 
     scanf("%f",&num); 
     if (num>=0){ 
                pos++; 
                } 
                 printf ("%d valores positivos\n", pos); 
                } 
                system("pause");
                 }

/*Fa�a um programa que mostre os n�meros pares entre 1 e 100, inclusive.
Entrada
Neste problema extremamente simples de repeti��o n�o h� entrada.
Sa�da
Imprima todos os n�meros pares entre 1 e 100, inclusive se for o caso, um em cada linha.
*/
#include <stdio.h>
#include <stdlib.h>
int main ( )

    { int x; 
     for(x=1;x<=100; x++){
      if(x%2 == 0) 
      printf("%d\n", x);
        }
         system("pause");
         }

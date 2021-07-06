/*URi1060Números Positivos
Faça um programa que leia 6 valores. Estes valores serão somente negativos ou positivos (desconsidere os valores nulos). A seguir,
 mostre a quantidade de valores positivos digitados.
Entrada
Seis valores, negativos e/ou positivos.
Saída
Imprima uma mensagem dizendo quantos valores positivos foram lidos.
*/

 #include <stdio.h>
#include <stdlib.h>
int positivo(float n){
 int i, p=0; 
 for(n=1;n<=6;i++)
if (n>=0)
     p=n+i;
     return(p);
}
 main ()
{ int i, p=0;
 float n; 
    for(i=1;i<=6;i++)
     scanf("%f",&n); 
     p = positivo(n);
      printf ("%d valores positivos\n", p); 
                system("pause");
                 }

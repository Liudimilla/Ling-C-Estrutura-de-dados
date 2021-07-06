/*Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”. 
Utilize a fórmula:
Entrada
O arquivo de entrada contém três valores inteiros.
Saída
Imprima o maior dos três valores seguido por um espaço e a mensagem "eh o maior".
*/
#include <stdio.h>
#include <stdlib.h>


main ( )
{
   int a,b,c,ab,abc;
  
   scanf("%d %d %d",&a,&b,&c);
   
     ab= (a+b+abs(a-b))/2;
     abc=(ab+c+abs(ab-c))/2;
   
   printf("%d eh o maior\n",abc );

     system("pause");
     }
   
   
   
   

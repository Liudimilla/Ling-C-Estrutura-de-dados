/*Fa�a um programa que leia tr�s valores e apresente o maior dos tr�s valores lidos seguido da mensagem �eh o maior�. 
Utilize a f�rmula:
Entrada
O arquivo de entrada cont�m tr�s valores inteiros.
Sa�da
Imprima o maior dos tr�s valores seguido por um espa�o e a mensagem "eh o maior".
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
   
   
   
   

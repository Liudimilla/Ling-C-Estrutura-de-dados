/*Com base na tabela abaixo, escreva um programa que leia o c�digo de um item e a quantidade deste
 item. A seguir, calcule e mostre o valor da conta a pagar.
EntradaO arquivo de entrada cont�m dois valores inteiros correspondentes ao c�digo e � quantidade 
de um item conforme tabela acima.
Sa�da
O arquivo de sa�da deve conter a mensagem "Total: R$ " seguido pelo valor a ser pago, com 2 casas 
ap�s o ponto decimal.
*/
#include <stdio.h>
#include <stdlib.h>

              int main()

{

    int x,y;

    scanf("%d %d",&x,&y);

    switch(x)

    {

    case 1 :

        printf("Total: R$ %.2lf\n",y*4.0);

        break;

    case 2 :

        printf("Total: R$ %.2lf\n",y*4.50);

        break;

    case 3 :

        printf("Total: R$ %.2lf\n",y*5.0);

        break;

    case 4 :

        printf("Total: R$ %.2lf\n",y*2.0);

        break;

    case 5 :

        printf("Total: R$ %.2lf\n",y*1.50);

        break;
               }    
                    
                       
                       system("pause");
                    
}

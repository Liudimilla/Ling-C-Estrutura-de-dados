/*C�lculo Simples
Neste problema, deve-se ler o c�digo de uma pe�a 1, o n�mero de pe�as 1, o valor unit�rio de cada pe�a 1, 
o c�digo de uma pe�a 2, o n�mero de pe�as 2 e o valor unit�rio de cada pe�a 2. Ap�s, 
calcule e mostre o valor a ser pago.
Entrada
O arquivo de entrada cont�m duas linhas de dados. Em cada linha haver� 3 valores, 
respectivamente dois inteiros e um valor com 2 casas decimais.
Sa�da
A sa�da dever� ser uma mensagem conforme o exemplo fornecido abaixo, lembrando de 
deixar um espa�o ap�s os dois pontos e um espa�o ap�s o $. O valor dever� ser 
apresentado com 2 casas ap�s o ponto.
*/
#include<stdio.h>
#include<stdlib.h>
int main ()
{
   int cod_1,num_1,cod_2,num_2;
   float val_u1,val_u2,sub;
   
   scanf("%d %d",&cod_1,&num_1);
   scanf("%f",&val_u1);
   scanf("%d %d",&cod_2,&num_2);
   scanf("%f",&val_u2);
   
   
   
   sub = (num_1*val_u1)+(num_2*val_u2);
   
   printf("VALOR A PAGAR: R$ %.2f\n", sub );

   system("pause");
}
   
     

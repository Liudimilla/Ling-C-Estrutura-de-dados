/*Leia 2 valores inteiros e armazene-os nas vari�veis A e B. Efetue a soma de A e B atribuindo o seu resultado na vari�vel X. 
Imprima X conforme exemplo apresentado abaixo. N�o apresente mensagem alguma al�m daquilo que est� sendo especificado e n�o 
esque�a de imprimir o fim de linha ap�s o resultado, caso contr�rio, voc� receber� "Presentation Error".
((Entrada))A entrada cont�m 2 valores inteiros.
((Sa�da))Imprima a vari�vel X conforme exemplo abaixo, com um espa�o em branco antes e depois da igualdade.
*/
#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int A,B,SOMA;
    scanf("%d %d",&A,&B);
    SOMA = A+B;
    printf("SOMA = %d\n",SOMA); 
    
    
     system("pause");
     }

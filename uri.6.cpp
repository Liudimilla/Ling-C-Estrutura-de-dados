/*Leia 3 valores, no caso, vari�veis A, B e C, que s�o as tr�s notas de um aluno. A seguir, 
calcule a m�dia do aluno, sabendo que a nota A tem peso 2, a nota B tem peso 3 e a nota C tem peso 5.
 Considere que cada nota pode ir de 0 at� 10.0, sempre com uma casa decimal.
Entrada
O arquivo de entrada cont�m 3 valores com uma casa decimal, de dupla precis�o (double).
Sa�da
Imprima a vari�vel MEDIA conforme exemplo abaixo, com 1 d�gito ap�s o ponto decimal e com um espa�o em branco 
antes e depois da igualdade. Assim como todos os problemas, n�o esque�a de imprimir o fim de linha ap�s o resultado, 
caso contr�rio, voc� receber� "Presentation Error".
*/
#include<stdio.h>
#include<stdlib.h>
int main ()
{
    double A,B,C,MEDIA;
    
    scanf("%lf %lf %lf",&A,&B,&C);
    
    
    A = (A*2);
    B = (B*3);
    C = (C*5);
    
    
    MEDIA = (A+B+C)/10;
    
    
    printf("MEDIA = %.1lf\n",MEDIA ); 
    
    
     system("pause");
     
     return 0;
     
     
     }

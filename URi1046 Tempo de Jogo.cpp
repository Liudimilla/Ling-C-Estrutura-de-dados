/*URI Online Judge | 1046 Tempo de Jogo
Leia a hora inicial e a hora final de um jogo. A seguir calcule a dura��o do jogo, sabendo que o mesmo pode come�ar em um dia e terminar em outro, 
tendo uma dura��o m�nima de 1 hora e m�xima de 24 horas.
Entrada
A entrada cont�m dois valores inteiros representando a hora de in�cio e a hora de fim do jogo.
Sa�da
Apresente a dura��o do jogo conforme exemplo abaixo.
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
 int h1,h2,res; 
 scanf("%d %d",&h1,&h2);
res = h2 - h1;

    if (res < 0)

    {

        res = 24 + (h2 - h1);

    }

    if (h2 == h1)

    {

        printf("O JOGO DUROU 24 HORA(S)\n");

    }

    else printf("O JOGO DUROU %d HORA(S)\n", res);
    system("pause");
     }
 
 

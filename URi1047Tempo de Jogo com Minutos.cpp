/*URI Online Judge | 1047Tempo de Jogo com Minutos
Leia a hora inicial, minuto inicial, hora final e minuto final de um jogo. A seguir calcule a dura��o do jogo.
Obs: O jogo tem dura��o m�nima de um (1) minuto e dura��o m�xima de 24 horas.
Entrada
Quatro n�meros inteiros representando a hora de in�cio e fim do jogo.
Sa�da
Mostre a seguinte mensagem: �O JOGO DUROU XXX HORA(S) E YYY MINUTO(S)� .
*/
#include <stdio.h>
#include <stdlib.h>
int main ( )
{ 
   
    int h1,m1,h2,m2,res,res1;
    scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
    
   res = h2 - h1;

   if (res < 0)

    {

        res = 24+(h2 - h1);
        }
          res1 = m2 - m1;
        if (res1 < 0)
        {
      
    res1 = 60 + (m2 - m1);
    res--;

    }
    
if (h2 == h1 && m2 == m1)

    {

        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");

    }

    else printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", res, res1);
       
          
   
                 system("pause");
     }

    
      
   
   

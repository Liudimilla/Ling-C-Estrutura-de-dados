/*Neste problema voc� deve ler um n�mero, indicando uma linha da matriz na qual uma opera��o deve ser realizada, um caractere mai�sculo, indicando a opera��o que ser� realizada,
 e todos os elementos de uma matriz M[12][12]. Em seguida, calcule e mostre a soma ou a m�dia dos elementos que est�o na �rea verde da matriz, conforme for o caso. 
 A imagem abaixo ilustra o caso da entrada do valor 2 para a linha da matriz, demonstrando os elementos que dever�o ser considerados na opera��o.
*Entrada
A primeira linha de entrada contem um n�mero L (0 = L = 11) indicando a linha que ser� considerada para opera��o. A segunda linha de entrada cont�m um �nico caractere
 Mai�sculo T ('S' ou 'M'), indicando a opera��o (Soma ou M�dia) que dever� ser realizada com os elementos da matriz. Seguem os 144 valores de ponto flutuante que comp�em 
 a matriz, sendo que a mesma � preenchida linha por linha, da linha 0 at� a linha 11, sempre da esquerda para a direita.
Sa�da
Imprima o resultado solicitado (a soma ou m�dia), com 1 casa ap�s o ponto decimal.

Exemplo de Entrada                                	Exemplo de Sa�da
(2 )- (S) - (0.0 )- (3.5) - (2.5) - (4.1)           12.6
*/
#include<stdio.h>
#include<stdlib.h>

  int main (){
     int M[12][12],L,T,C,res;
     
     for(L= 0;L<11;L++){
     for(C= 0;C<11;C++){
     
     {
         
     printf("\n\ndigite qual linha sera feita a operacao\n\n\t" );
     scanf("%d",&L);
      printf("\n\ndigite qual operacao sera realizada  S = para soma  e M = media\n\n\t"  );
       scanf("%d",&T);
       }
       res=(L=0 + L<=11);
       
       printf("\n\no resultado solicitado %d\n\n\t",res  );
       {
                      
}      
}
}
                           system("pause");
                          }
                          
                        
         
     
     

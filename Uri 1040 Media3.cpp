/*Uri 1040 Media3
Leia quatro n�meros (N1, N2, N3, N4), cada um deles com uma casa decimal, correspondente �s quatro notas de um aluno. Calcule a m�dia com 
pesos 2, 3, 4 e 1, respectivamente, para cada uma destas notas e mostre esta m�dia acompanhada pela mensagem "Media: ". Se esta m�dia for 
maior ou igual a 7.0, imprima a mensagem "Aluno aprovado.". Se a m�dia calculada for inferior a 5.0, imprima a mensagem "Aluno reprovado.". 
Se a m�dia calculada for um valor entre 5.0 e 6.9, inclusive estas, o programa deve imprimir a mensagem "Aluno em exame.".No caso do aluno 
estar em exame, leia um valor correspondente � nota do exame obtida pelo aluno. Imprima ent�o a mensagem "Nota do exame: " acompanhada pela
 nota digitada. Recalcule a m�dia (some a pontua��o do exame com a m�dia anteriormente calculada e divida por 2). e imprima a mensagem "Aluno 
 aprovado." (caso a m�dia final seja 5.0 ou mais ) ou "Aluno reprovado.", (caso a m�dia tenha ficado 4.9 ou menos). Para estes dois casos
  (aprovado ou reprovado ap�s ter pego exame) apresente na �ltima linha uma mensagem "Media final: " seguido da m�dia final para esse aluno.
Entrada
A entrada cont�m quatro n�meros de ponto flutuante correspendentes as notas dos alunos.
Sa�da
Todas as respostas devem ser apresentadas com uma casa decimal. As mensagens devem ser impressas conforme a descri��o do problema. N�o esque�a de imprimir o enter ap�s o final de cada linha, caso contr�rio obter� "Presentation Error".
*/
#include <stdio.h>
#include <stdlib.h>
int main ( )
{ 
 double n1,n2,n3,n4,media,x,y,w,p,ex,media2;

    scanf("%lf %lf %lf %lf",&n1 ,&n2, &n3, &n4);
    
    x = (n1*2);
    y = (n2*3);
    w = (n3*4);
    p = (n4*1);
    
    media=(x+y+w+p)/10;

    
    
    if(media>=7.0){
    printf("Media: %.1lf \n" ,media);
    printf("Aluno aprovado.\n");
}
    else if(media<5.0){
          printf("Media: %.1lf \n" ,media);
     printf("Aluno reprovado.\n");
     
     }
     else if (media>=5.0)
     {
            scanf("%lf",&ex);
          printf("Media: %.1lf \n" ,media);
      printf("Aluno em exame. \n");
  printf("Nota do exame: %.1lf \n" ,ex);
      printf("Aluno aprovado.\n");
  media2 =(ex+media)/2;
  printf("Media final: %.1lf \n" ,media2);
}
      
                 else if(media2 >= 5.0)
                 {
                 printf("Aluno reprovado.\n");
                 printf("media final: %.1lf \n" ,media2);
                
                 }
                 system("pause");
     }
                 
    
    
    

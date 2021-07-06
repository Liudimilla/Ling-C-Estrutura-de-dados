/*Implemente um programa denominado combinador, que recebe duas strings e deve combin�-las, alternando as letras de cada string, come�ando 
com a primeira letra da primeira string, seguido pela primeira letra da segunda string, em seguida pela segunda letra da primeira string, 
e assim sucessivamente. As letras restantes da cadeia mais longa devem ser adicionadas ao fim da string resultante e retornada.
Entrada
A entrada cont�m v�rios casos de teste. A primeira linha cont�m um inteiro N que indica a quantidade de casos de teste que vem a seguir.
 Cada caso de teste � composto por uma linha que cont�m duas cadeias de caracteres, cada cadeia de caracteres cont�m entre 1 e 50 caracteres inclusive.
Sa�da
Combine as duas cadeias de caracteres da entrada como mostrado no exemplo abaixo e exiba a cadeia resultante.
*/

#include <stdio.h>
#include <iostream>

int main(){
 
    int n,a,b,i,j;
    
    char um[50];
    char dois[50];

    scanf("%d",&n);
    for(i < n; i++){
            scanf("%s %s",&um,&dois);
            a = 0;
            b = 0;
            for(j < 50; j++){
                    if(um[j] == '\0') a = 1;
                    if(dois[j] == '\0') b = 1;
                    if(a == 1 && b == 1) break;
                    if(a == 0) printf("%c",um[j]);
                    if(b == 0) printf("%c",dois[j]);
            }
            printf("\n");        
    }
 
     system("pause");
}

/*URi1050DDD
Leia um n�mero inteiro que representa um c�digo de DDD para discagem interurbana. 
Em seguida, informe � qual cidade o DDD pertence, considerando a tabela abaixo:
Se a entrada for qualquer outro DDD que n�o esteja presente na tabela acima, o programa dever� informar:
DDD nao cadastrado
Entrada
A entrada consiste de um �nico valor inteiro.
Sa�da
Imprima o nome da cidade correspondente ao DDD existente na entrada. Imprima DDD nao cadastrado caso n�o existir DDD correspondente ao n�mero digitado
DDD Destino
61  Brasilia
71  Salvador
11  S.P
21  R.J
32  J.Fora
19  Campinas
27  Vitoria
31  B.H
*/
/*
#include <stdio.h>
#include <stdlib.h>
int main(void) {
int op;

scanf("%d",&op);

switch(op){
           case 61:
                printf("Brasilia\n");
                break;
           case 71:
                printf("Salvador\n");
                break;
           case 11:
                printf("Sao Paulo\n");
                break;
           case 21:
                printf("Rio de Jnaeiro\n");
                break;
           case 32:
                printf("Juiz de Fora\n");
                break;
           case 19:
                printf("Campinas\n");
                break;
           case 27:
                printf("Vitoria\n");
                break;
           case 31:
                printf("Belo Horizonte\n");
                break;
           
           defautl:printf("DDD nao cadastrado\n");
   } 
   
     return 0;      
        
}
*/
#include <iomanip>
#include <string>
#include <iostream>
using namespace std;

int main() {

int op;

scanf("%d",&op);

switch(op){
           case 61:
                printf("Brasilia\n");
                break;
           case 71:
                printf("Salvador\n");
                break;
           case 11:
                printf("Sao Paulo\n");
                break;
           case 21:
                printf("Rio de Jnaeiro\n");
                break;
           case 32:
                printf("Juiz de Fora\n");
                break;
           case 19:
                printf("Campinas\n");
                break;
           case 27:
                printf("Vitoria\n");
                break;
           case 31:
                printf("Belo Horizonte\n");
                break;
           
           defautl:printf("DDD nao cadastrado\n");
   } 

    system("pause");   
        
}


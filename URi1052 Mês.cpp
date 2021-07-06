/*URi1052 Mês
Leia um valor inteiro entre 1 e 12, inclusive. Correspondente a este valor, deve ser apresentado como resposta 
o mês do ano por extenso, em inglês, com a primeira letra maiúscula.
Entrada
A entrada contém um único valor inteiro.
Saída
Imprima por extenso o nome do mês correspondente ao número existente na entrada, com a primeira letra em maiúscula.
*/
/*
#include <stdio.h>
#include <stdlib.h>
int main (void){

int op;
scanf("%d",&op);
switch(op){
           case 1:
                printf("Janeiro\n");
                break;
           case 2:
                printf("Fevereiro\n");
                break;
           case 3:
                printf("Marco\n");
                break;
           case 4:
                printf("April\n");
                break;
           case 5:
                printf("Maio\n");
                break;
           case 6:
                printf("Junho\n");
                break;
           case 7:
                printf("Julho\n");
                break;
           case 8:
                printf("Agosto\n");
                break;
           case 9:
                printf("Setembro\n");
                break;
           case 10:
                printf("Outubro\n");
                break;
           case 11:
                printf("Novembro\n");
                break;
           case 12:
                printf("Dezenbro\n");
                break;      
   } 


    system("pause");   
        
}
*/
#include<stdio.h>
#include <stdlib.h>
int main(){
    int op;
    scanf("%d",&op);
    if(op==1)
    printf("Janeiro\n");
    else if(op==2)
    printf("Fevereiro\n");
    else if(op==3)
    printf("Marco\n");
    else if(op==4)
    printf("Abril\n");
    else if(op==5)
    printf("Maio\n");
    else if(op==6)
    printf("Junho\n");
    else if(op==7)
    printf("Julho\n");
    else if(op==8)
    printf("Agosto\n");
    else if(op==9)
    printf("Setembro\n");
    else if(op==10)
    printf("Outubro\n");
    else if(op==11)
    printf("Novembro\n");
    else if(op==12)
    printf("Dezembro\n");
 system("pause");
}

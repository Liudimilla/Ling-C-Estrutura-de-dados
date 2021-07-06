#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char nome[70], nome1[70];
    int x, y, r,z;
    
    printf("Entre com o nome\n");
    scanf("%s", &nome);
    
    printf("Entre com o nome\n");
    scanf("%s", &nome1);
    
    //strcmp é para calcular a string em tabela ASCII
    z= strcmp(nome,nome1);
    
    if(z > 0){
         printf("o Primeiro e Maior ---> % s\n", nome);
    }
    if(z < 0){
         printf("O Segundo e Maior --> % s\n", nome1);
    }
    if(z==0){
         printf("Os nomes sao iguais");
    }else{}
    
    system("pause");  
}
